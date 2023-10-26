using std::placeholders::_1;

class RWTH : public rclcpp::Node
{
public:
    RWTH() : Node("RWTH"), count_(0)
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("RWTH", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
                                         std::bind(&RWTH::PublishNode, this));
                                        
        
    }

class TURTLE : public rclcpp::Node
    TURTLE() : Node("/turtlebot3_laserscan")
    {
                                        
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("/scan", 10, std::bind(&RWTH::receive, this,_1));                                 
        RCLCPP_INFO(get_logger(), "This node has been started");
        
    }
private:
    void PublishNode()
    {
        auto message = std_msgs::msg::String();
      	message.data = "Hello, world! " + std::to_string(count_++);
      	RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
      	publisher_->publish(message);
    }
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
    
    void receive(const sensor_msgs::msg::LaserScan::SharedPtr msg) const
    {
	 for (size_t i = 0; i < msg->ranges.size(); ++i) {
        RCLCPP_INFO(
            rclcpp::get_logger("laser_scan_subscriber"),
            "Range[%zu]: %f",
            i,
            msg->ranges[i]
        );
    }
    }
    std::string receivedMsg = "";
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

