#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include<unistd.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#include "houghmessage/msg/r_whough_line.hpp"
#include <algorithm>
#include <thread>
#include<cmath>
//#include "rwth/msg/RWhoughLine.hpp"


// Declare a global publisher variable
//rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher;
int maxValueFin;
std::vector<float> RAxis_glob;
std::vector<float> ThAxis_global;

//Callback for /scan topic receive
void receiveCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg) 
    {	


		//Code is to slow when Nth = 100,
		int NTh = 50;
		float delta = 0.05;
		double pi = 2*acos(0.0);
		//float angle_increment = msg->angle_increment;
		//RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Angle Increment: %.4f", angle_increment);

			RCLCPP_INFO(rclcpp::get_logger("Received Message"), "1");
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
			
			float dTheta=2*pi/NTh; 
			
			
				//Find max non-inf value
				for (int i = 0; i < ranges.size(); ++i) {
				//RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Value: %.2f, Inf: %.2f", ranges[i], std::isinf(ranges[i]));
						if (ranges[i] > dMax && std::isinf(ranges[i]) == 0) {
							dMax = ranges[i];
						}
				}
			//RCLCPP_INFO(rclcpp::get_logger("3"), "3");
			int NrOfMeas=ranges.size();
			int Nr=floor(dMax/delta+1.5);        
			int C[Nr][NTh]={};
			int Ri;
			//RCLCPP_INFO(rclcpp::get_logger("4"), "4");
			std::vector<float> ThAxis; 
			for (int i = 0; i < NTh; i++) {
				ThAxis.push_back((i+1)*dTheta);
				}
			
			std::vector<float> RAxis;
			for (int i = 0; i < Nr; i++) {
				RAxis.push_back((i+1)*delta);
			}
				
				
				
				
			
			float Theta;
			float tres=0.1;
			//RCLCPP_INFO(rclcpp::get_logger("5"), "5");
			for (int i=0; i < (NTh/2); i++)
			{
			//RCLCPP_INFO(rclcpp::get_logger("Indexing i"), "i_ind: %i, ThAxis_sice: %i", i, ThAxis.size());
			Theta=ThAxis[i];
			std::vector<float> R;
			//RCLCPP_INFO(rclcpp::get_logger("6"), "6");
			for (int k = 0; k < ranges.size(); k++)
			{
				//RCLCPP_INFO(rclcpp::get_logger("Indexing k"), "k_ind: %i, ranges_size: %i, phi_size: %i, R_size: %i", k, ranges.size(), phi.size(), R.size());
				R.push_back(ranges[k]*cos(phi[k]-Theta));
			}
			for (int j=1; j < R.size(); j++)
			{
				//RCLCPP_INFO(rclcpp::get_logger("Indexing j"), "j_ind: %i, Range_size: %zu, C_size: %li, Ri_sice: %i, R_size: %i", j, ranges.size(), sizeof(C), Ri, R.size());
				if (std::isinf(R[j]))
				{
					//RCLCPP_INFO(rclcpp::get_logger("Indexing j"), "If");
					//RCLCPP_INFO(rclcpp::get_logger("IsInf"), "2");
					R[j];	
					//RCLCPP_INFO(rclcpp::get_logger("Indexing j"), "If_2");
				}
				else if (R[j]>0)
				{
				//RCLCPP_INFO(rclcpp::get_logger("Indexing j"), "ElIf");
				Ri=floor(1.5+R[j]/delta);
				C[Ri][i]=C[Ri][i]+R[j]; 
				}
				else
				{
				//RCLCPP_INFO(rclcpp::get_logger("Indexing j"), "Else");
				Ri=floor(1.5-R[j]/delta);
				C[Ri][i+NTh/2]=C[Ri][i+NTh/2]-R[j]; 
				}
				
			}

			}
				
		int maxValue = C[0][0]; // Initialize with the first element
		int numRows = sizeof(C) / sizeof(C[0]);      // Number of rows
    	int numCols = sizeof(C[0]) / sizeof(C[0][0]);
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
						 
						maxValue = C[i][j];
					}
					catch(const std::exception& e)
					{
						maxValue = maxValue;
						
					}
					
					
				}
			}
				//maxValueFin = maxValue;
			
			}
		RAxis_glob = RAxis;

		
    }

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    //Naming unique node to RWTH
    auto node = std::make_shared<rclcpp::Node>("rwth");

    // Subscriber to topic /scan with 10sec of timeout
    //Message type is sensor_msgs::msg::LaserScan and has to be handled accordingly
    auto subscription = node->create_subscription<sensor_msgs::msg::LaserScan>(
        "/scan", 5, receiveCallback); 

    // Publlisher for test topic here, will be changed after further implementation
    auto publisher = node->create_publisher<houghmessage::msg::RWhoughLine>(
        "/something", 2); // Replace "publisher_topic"

    rclcpp::WallRate loop_rate(1); // Adjust the publishing frequency as needed

    while (rclcpp::ok()) {
   		//auto message = std_msgs::msg::Int32MultiArray;
		houghmessage::msg::RWhoughLine mess;
		//std_msgs::msg::Float32MultiArray message;
        // Populate the message data
		mess.thaxis=ThAxis_global;
		mess.raxis =RAxis_glob;
        //message->data = RAxis_glob;
        publisher->publish(std::move(mess));
        rclcpp::spin_some(node);
        //TO see if loop is runing
        RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Running");
    	loop_rate.sleep();
    }
	RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Stopped");
    rclcpp::shutdown();

    return 0;
}
