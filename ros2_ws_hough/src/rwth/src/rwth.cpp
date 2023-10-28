#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <unistd.h>
#include <iostream>
#include <exception>
#include <tuple>
#include "helper.hpp"

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



//Global Variables 
float RAxis_glob;
float ThAxis_global;
std::vector<float> globalvRanges;
std::vector<float> globalvAngles;
std::atomic<bool> threadRunning{false};


//Callback for /scan topic receive
void receiveCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg) 
{	
	RCLCPP_INFO(rclcpp::get_logger("Subscription Callback"), "Message Received");
	
	//Start threading of Hough-Transform
	if (!threadRunning){
		threadRunning = true;
		std::thread calculateHough([msg](){

			//Set const parameters
			const int NTh = 300;
			const float delta = 0.05;
			const double pi = 2*acos(0.0);

			//Get values from received message
			//For calculating the angles of Hough-Transform
			float angle_min = msg->angle_min;
			float angle_increment = msg->angle_increment;


			float dMax = 0.0;
			std::vector<float> ranges = msg->ranges;

			// Process the LaserScan data
			float dTheta=2.0*pi/(float)NTh; 
			
			
			//Find max non-inf value
			for (int i = 0; i < ranges.size(); ++i) {
					if (ranges[i] > dMax && std::isinf(ranges[i]) == 0) {
						dMax = ranges[i];
					}
			}

			//Calculate rows of peak matrix C
			int Nr=(int)(dMax/delta+1.5);  
			
			
			HelperRWTH newHelper(Nr, NTh);
			

			//Creat Vektor for theta, range and phi. 
			std::vector<float> ThAxis, RAxis, phi;
    		std::tie(ThAxis, RAxis, phi) = newHelper.creatArray(ranges, angle_min, angle_increment, dTheta, delta);

			float** C = newHelper.creatPeakMatrix(dTheta, delta, ranges, phi);
			std::tuple<float, float> maxInts = newHelper.findMaxValue(C);
			int maxRow_ = (int)std::get<0>(maxInts);
			int maxCol_ = (int)std::get<1>(maxInts);
			RAxis_glob = RAxis.at(maxRow_);
			ThAxis_global = ThAxis.at(maxCol_);

			
			globalvRanges = ranges;
			globalvAngles = phi;
			threadRunning = false;
			
			//Delete C Matrix
			newHelper.deleteCMatrix(C, Nr);
		});

		//Independent Thread, otherwise subscriber Callback blocked
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
        "/something", 0.2); // Replace "publisher_topic"

    rclcpp::WallRate loop_rate(5); // Adjust the publishing frequency as needed

    while (rclcpp::ok()) {
		float ThAxis_local;
		houghmessage::msg::RWhoughLine mess;
        // Populate the message data
		ThAxis_local = ThAxis_global;

		//Hough Transform Line
		mess.thaxis=ThAxis_local;
		mess.raxis = RAxis_glob;

		//Laser Scanner Data
		mess.vranges = globalvRanges;
		mess.vangles = globalvAngles;


        publisher->publish(std::move(mess));
		RCLCPP_INFO(rclcpp::get_logger("Main Loop"), "Running");
        rclcpp::spin_some(node);
    	loop_rate.sleep();
    }
	RCLCPP_INFO(rclcpp::get_logger("laser_scan_processing"), "Stopped");
    rclcpp::shutdown();

    return 0;
}
