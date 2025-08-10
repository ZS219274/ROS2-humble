#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/student.hpp"


class TalkerStuNode : public rclcpp::Node
{
public:
    TalkerStuNode() : Node("talker_stu_node"), count_(0)
    {
        publisher_ = this->create_publisher<base_interfaces_demo::msg::Student>("student", 10);
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(5000), std::bind(&TalkerStuNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto message = base_interfaces_demo::msg::Student();
        message.name = "张三";
        message.age = 18 + count_++;
        message.height = 1.7;
        publisher_->publish(message);
        RCLCPP_INFO(this->get_logger(), "Publishing: name='%s', age=%d, height=%.2f",
                    message.name.c_str(), message.age, message.height);
    }
    size_t count_ = 0;
    rclcpp::Publisher<base_interfaces_demo::msg::Student>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TalkerStuNode>());
    rclcpp::shutdown();
    return 0;
}