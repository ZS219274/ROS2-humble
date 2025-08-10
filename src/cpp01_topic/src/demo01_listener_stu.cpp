#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/student.hpp"

class MinimalSubscriber : public rclcpp::Node {
public:
    MinimalSubscriber() : Node("minimal_subscriber") {
        subscription_ = this->create_subscription<base_interfaces_demo::msg::Student>(
            "student", 10, std::bind(&MinimalSubscriber::topic_callback, this, std::placeholders::_1));
    }

private:
    void topic_callback(const base_interfaces_demo::msg::Student::SharedPtr msg) const {
        RCLCPP_INFO(this->get_logger(), "Received: name='%s', age=%d, height=%.2f",
                    msg->name.c_str(), msg->age, msg->height);
    }
    rclcpp::Subscription<base_interfaces_demo::msg::Student>::SharedPtr subscription_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalSubscriber>());
    rclcpp::shutdown();
    return 0;
}