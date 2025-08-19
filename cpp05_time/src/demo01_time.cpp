#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo01_time");
  rclcpp::Rate rate(1);

  while (rclcpp::ok()) {
    RCLCPP_INFO(node->get_logger(), "hello world cpp05_time package");
    rate.sleep();

    rclcpp::Time t1(1000000000);
    RCLCPP_INFO(node->get_logger(), "t1: %.2f, %ld", t1.seconds(), t1.nanoseconds());
    //get time by node
    rclcpp::Time now = node->get_clock()->now();
    RCLCPP_INFO(node->get_logger(), "now: %.2f, %ld", now.seconds(), now.nanoseconds());
  }

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
