#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/msg/student.hpp"


class SubNode : public rclcpp::Node {
public:
    SubNode() : Node("sub_node") {
        sub_ptr_ = this->create_subscription<demo_interfaces_base::msg::Student>("Student", 10,
        std::bind(&SubNode::callback, this, std::placeholders::_1));
    }
private:
    void callback(const demo_interfaces_base::msg::Student msg) {
        RCLCPP_INFO(this->get_logger(), "I heard: %s", msg.name.c_str());
        RCLCPP_INFO(this->get_logger(), "I heard: %d", msg.age);
        RCLCPP_INFO(this->get_logger(), "I heard: %f", msg.height);
    }
    rclcpp::Subscription<demo_interfaces_base::msg::Student>::SharedPtr sub_ptr_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubNode>());
    rclcpp::shutdown();
    return 0;
}