#include "rclcpp/rclcpp.hpp"


class MyParamServer : public rclcpp::Node {
public:
  MyParamServer() : Node("param_server") {
    rclcpp::Parameter p1("number", 1);
    rclcpp::Parameter p2("name", "tom");
    rclcpp::Parameter p3("flag", true);

    // 获取参数值
    RCLCPP_INFO(this->get_logger(), "number: %ld", p1.as_int());
    RCLCPP_INFO(this->get_logger(), "name: %s", p2.as_string().c_str());
    RCLCPP_INFO(this->get_logger(), "flag: %d", p3.as_bool());

    // 获取参数键
    RCLCPP_INFO(this->get_logger(), "name: %s", p1.get_name().c_str());
    RCLCPP_INFO(this->get_logger(), "type: %s", p1.get_type_name().c_str());
    RCLCPP_INFO(this->get_logger(), "value2string: %s", p1.value_to_string().c_str());
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MyParamServer>());
  rclcpp::shutdown();
  return 0;
}