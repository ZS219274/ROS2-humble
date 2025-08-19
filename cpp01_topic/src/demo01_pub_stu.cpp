#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/msg/student.hpp"

using namespace std::chrono_literals;

class PubStu : public rclcpp::Node {
public:
    PubStu() : Node("pub_stu"), count_(0)
    {
        publisher_ = this->create_publisher<demo_interfaces_base::msg::Student>("Student", 10);
        timer_ = this->create_wall_timer(1000ms, std::bind(&PubStu::timer_callback, this));
    }

private:

    void timer_callback() {
        auto student = demo_interfaces_base::msg::Student();
        student.name = "Tom";
        student.age = 18;
        student.height = 1.7;
        publisher_->publish(student);
        RCLCPP_INFO(this->get_logger(), "Published: %s, %d, %f", student.name.c_str(), student.age, student.height);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
    rclcpp::Publisher<demo_interfaces_base::msg::Student>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PubStu>());
    rclcpp::shutdown();
    return 0;
}