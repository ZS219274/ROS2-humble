#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class MyPublisher :public rclcpp::Node {
public:
    MyPublisher() : Node("myTopic"), count_(0)
    {
        pub_ = this->create_publisher<std_msgs::msg::String>("myTopic", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&MyPublisher::timer_callback, this));
    }
private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
    size_t count_ = 0;

    rclcpp::TimerBase::SharedPtr timer_;

    void timer_callback() {
        auto msg = std_msgs::msg::String();
        msg.data = "hello world " + std::to_string(count_++);
        pub_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", msg.data.c_str());
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MyPublisher>());
    rclcpp::shutdown();
    return 0;
}