#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <unistd.h>
#include <iostream>
#include <exception>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#include "houghmessage/msg/r_whough_line.hpp"
#include <algorithm>
#include <thread>
#include <cmath>
#include <atomic>
#include <mutex>
#include <condition_variable>

//#include "rwth/msg/RWhoughLine.hpp"


// Declare a global publisher variable
//rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher;
int maxValueFin;
float RAxis_glob;
float ThAxis_global;
bool data_ready_;
std::vector<float> globalvRanges;
std::vector<float> globalvAngles;
std::atomic<bool> threadRunning{false};
std::mutex dataMutex;   // Mutex to protect access to sharedData
std::condition_variable dataReady; // Condition variable to signal data availability
//Callback for /scan topic receive
void receiveCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg) 
    {	
	RCLCPP_INFO(rclcpp::get_logger("Received Message"), "1");
	if (!threadRunning){
		threadRunning = true;
		std::thread calculateHough([msg](){
			//RCLCPP_INFO(rclcpp::get_logger("Threading"), "Started");
			//Code is to slow when Nth = 100,
			int NTh = 300;
			float delta = 0.05;
			double pi = 2*acos(0.0);
			//float angle_increment = msg->angle_increment;
			//RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Angle Increment: %.4f", angle_increment);

			//RCLCPP_INFO(rclcpp::get_logger("Threading"), "2");
			float angle_min = msg->angle_min;
			float angle_max = msg->angle_max;
			float angle_increment = msg->angle_increment;
			float range_min = msg->range_min; 
			float range_max = msg->range_max;
			float dMax = 0.0;
			std::vector<float> ranges_original = msg->ranges;
			std::vector<float> ranges(ranges_original);
			std::vector<float> phi;
			//RCLCPP_INFO(rclcpp::get_logger("2"), "2");
			for(int i = 0; i < ranges.size(); i++)
			{
			
				phi.push_back(angle_min+i*angle_increment);
			}
			std::vector<float> intensities = msg->intensities;
			//RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "angle Max: %.2f, angle Min: %.2f, range Max: %.2f, range Min: %.2f", angle_max, angle_min, range_max, range_min);
			// Process the LaserScan data
			//RCLCPP_INFO(rclcpp::get_logger("Threading"), "3");
			float dTheta=2.0*pi/(float)NTh; 
			
			
			//Find max non-inf value
			for (int i = 0; i < ranges.size(); ++i) {
			//RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Value: %.2f, Inf: %.2f", ranges[i], std::isinf(ranges[i]));
					if (ranges[i] > dMax && std::isinf(ranges[i]) == 0) {
						dMax = ranges[i];
					}
			}
			//RCLCPP_INFO(rclcpp::get_logger("3"), "3");
			int NrOfMeas=ranges.size();
			int Nr=(int)(dMax/delta+1.5);        
			float C[Nr][NTh]={};
			//RCLCPP_INFO(rclcpp::get_logger("Threading"), "4");
			
			//RCLCPP_INFO(rclcpp::get_logger("4"), "4");
			std::vector<float> ThAxis; 
			{
				float f = 0.0;
				for (int i = 0; i < NTh; i++)
				{
					f+=1.0;
					ThAxis.push_back(f*dTheta);
				//RCLCPP_INFO(rclcpp::get_logger("Threading"), "dTheta: %0.2f", f*dTheta);	
				}
			}
			
			std::vector<float> RAxis;
			float m = 0.0;
			for (int i = 0; i < Nr; i++) {
				m += 1.0;
				RAxis.push_back(m*delta);
			}
				
			//RCLCPP_INFO(rclcpp::get_logger("Threading"), "5");	
				
				
			
			float fTheta = 0.0;
			float tres=0.1;
			//RCLCPP_INFO(rclcpp::get_logger("5"), "5");
			for (int h=0; h < (NTh/2); h++)
			{
		
				//RCLCPP_INFO(rclcpp::get_logger("Indexing i"), "i_ind: %i, ThAxis_sice: %i", i, ThAxis.size());
				//Theta=ThAxis[h];
				fTheta += dTheta;
				std::vector<float> R;
				//RCLCPP_INFO(rclcpp::get_logger("Threading"), "6");
				//RCLCPP_INFO(rclcpp::get_logger("6"), "6");
				for (size_t k = 0; k < ranges.size(); k++)
				{	

					try
					{
						//RCLCPP_INFO(rclcpp::get_logger("Indexing k"), "Theta: %0.2f, phi[k]: %0.2f", Theta, phi[k]);
						R.push_back(ranges.at(k)*cos(phi[k]-fTheta));
						//RCLCPP_INFO(rclcpp::get_logger("Indexing k"), "k_ind: %li, ranges_size: %li, phi_size: %li, R_size: %li", k, ranges.size(), phi.size(), R.size());
					}
					catch(const std::exception& e)
						{
							RCLCPP_INFO(rclcpp::get_logger("Threading"), "Exception 0: %s", e.what());
						}
					
				}
				//RCLCPP_INFO(rclcpp::get_logger("Threading"), "7");
				float g = 0.0;
				for (size_t j=1; j < R.size(); j++)
				{
					
					
					//RCLCPP_INFO(rclcpp::get_logger("Threading"), "R sice: %li, j: %li, h: %i", R.size(), j, h);
					if (std::isinf(R[j]))
					{
						//RCLCPP_INFO(rclcpp::get_logger("Threading"), "7_1");
						R[j];	
					}
					else if (R[j]>0)
					{
						try
						{
							//RCLCPP_INFO(rclcpp::get_logger("Threading"), "Value: %.2f, Inf:", R[j]);
							//RCLCPP_INFO(rclcpp::get_logger("Threading"), "R[j]: %.2f, delta: %.2f, C[Ri][i]: %.2f", R[j], delta, floor(1.5+R[j]/delta));
							//RCLCPP_INFO(rclcpp::get_logger("Threading"), "7_2");
							//C[Ri][h] = 1;
							//Ri = 1;
							int Ri=(int)(0.5+R[j]/delta);
							//RCLCPP_INFO(rclcpp::get_logger("Threading"), "Ri: %i, C_size: %i, h: %i", Ri, Nr, h );
							if (Ri<Nr){
								C[Ri][h]=C[Ri][h]+R[j]; 
								//RCLCPP_INFO(rclcpp::get_logger("Threading"), "R[j]: %.2f, delta: %.2f, C[Ri][i]: %.2f", R[j], delta, floor(1.5+R[j]/delta));
							}
						}
						catch(const std::exception& e)
						{
							RCLCPP_INFO(rclcpp::get_logger("Threading"), "Exception 1: %s", e.what());
							
						}
						
					}
					else
					{	
						try
						{
							//RCLCPP_INFO(rclcpp::get_logger("Threading"), "7_3");

							//C[Ri][h+NTh/2] = 1;
							//Ri = 1;
							int Ri=(int)(0.5-R[j]/delta);
							C[Ri][h+NTh/2]=C[Ri][h+NTh/2]-R[j]; 
						}
						catch(const std::exception& e)
						{
							RCLCPP_INFO(rclcpp::get_logger("Threading"), "Exception 2: %s", e.what());
						}
					}
					//RCLCPP_INFO(rclcpp::get_logger("Threading"), "7_4");
				}
				R.clear();
			}

			//RCLCPP_INFO(rclcpp::get_logger("Threading"), "8");		
			int maxValue = C[0][0]; // Initialize with the first element
			int numRows = Nr;      // Number of rows
			int numCols = NTh;

			int maxRow = 0;
			int maxCol = 0;
			//RCLCPP_INFO(rclcpp::get_logger("Max Peak"), "2"); 
			// Iterate through the matrix to find the maximum value
			for (int i = 0; i < numRows; i++) {
				//RCLCPP_INFO(rclcpp::get_logger("Max Peak Layer 0"), "Rows: %i, Col: %i, C_size: %i", numRows, numCols, sizeof(C)); 
				for (int j = 0; j < numCols; j++) {
					//RCLCPP_INFO(rclcpp::get_logger("Max Peak Layer 1_1"), "Rows: %i, Col: %i, C_i_j: %i", numRows, numCols, sizeof(C)); 
					//RCLCPP_INFO(rclcpp::get_logger("Max Peak Layer 1_2"), "MaxOld: %i, MaxNew: %i",maxValue, C[i][j]);
					//RCLCPP_INFO(rclcpp::get_logger("Max Peak Layer 1_3"), "i: %i, j: %i",i, j);
					if (C[i][j] > maxValue) {
						//RCLCPP_INFO(rclcpp::get_logger("Max Peak Layer 2"), "Max: %i", C[i][j]);
						try
						{	
							//RCLCPP_INFO(rclcpp::get_logger("Max Peak"), "Max: %i", C[i][j]);
							maxValue = C[i][j];
							maxRow = i;
							maxCol = j;
						}
						catch(const std::exception& e)
						{
							maxValue = maxValue;
							
						}
						
						
					}
				}
				
				}
				
				//RCLCPP_INFO(rclcpp::get_logger("Threading"), "9");

				RAxis_glob = RAxis.at(maxRow);
				ThAxis_global = ThAxis.at(maxCol);
				RCLCPP_INFO(rclcpp::get_logger("Angle"), "Max: %0.2f", ThAxis.at(maxCol));
				globalvAngles.clear();
				globalvRanges.clear();
				globalvRanges = ranges;
				globalvAngles = phi;
				//RCLCPP_INFO(rclcpp::get_logger("Threading"), "10");
				threadRunning = false;
			});
	calculateHough.detach();
	}
}
		


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    //Naming unique node to RWTH
    auto node = std::make_shared<rclcpp::Node>("rwth");

    // Subscriber to topic /scan with 10sec of timeout
    //Message type is sensor_msgs::msg::LaserScan and has to be handled accordingly
    auto subscription = node->create_subscription<sensor_msgs::msg::LaserScan>(
        "/scan", 0.2, receiveCallback); 

    // Publlisher for test topic here, will be changed after further implementation
    auto publisher = node->create_publisher<houghmessage::msg::RWhoughLine>(
        "/something", 1); // Replace "publisher_topic"

    rclcpp::WallRate loop_rate(1); // Adjust the publishing frequency as needed
	//std::thread workerThread(workerFunction);
	//workerThread.detach();
    while (rclcpp::ok()) {
		float ThAxis_local;
		houghmessage::msg::RWhoughLine mess;
        // Populate the message data
		ThAxis_local = ThAxis_global;
		data_ready_ = false;

		mess.thaxis=ThAxis_local;
		mess.raxis = RAxis_glob;
		mess.vranges = globalvRanges;
		mess.vangles = globalvAngles;
		
		//mess.row = row;
		//mess.col = col;




        publisher->publish(std::move(mess));
		RCLCPP_INFO(rclcpp::get_logger("Published Hough"), "1");
        rclcpp::spin_some(node);
    	loop_rate.sleep();
    }
	RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Stopped");
    rclcpp::shutdown();

    return 0;
}
