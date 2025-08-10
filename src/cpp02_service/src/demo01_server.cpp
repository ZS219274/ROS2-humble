#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"


class AddIntsServer : public rclcpp::Node {
public:
  AddIntsServer() : Node("add_ints_server")
  {
    server_ = create_service<base_interfaces_demo::srv::AddInts>("add_ints",
      std::bind(&AddIntsServer::add_ints_callback, this, std::placeholders::_1, std::placeholders::_2));
  }
private:
  void add_ints_callback(
    const std::shared_ptr<base_interfaces_demo::srv::AddInts::Request> request,
    std::shared_ptr<base_interfaces_demo::srv::AddInts::Response> response)
  {
    int sum = request->num1 + request->num2;
    response->sum = sum;
    RCLCPP_INFO(this->get_logger(), "请求数据为：%d, %d", request->num1, request->num2);
    RCLCPP_INFO(this->get_logger(), "响应数据为：%d", response->sum);
  }
  rclcpp::Service<base_interfaces_demo::srv::AddInts>::SharedPtr server_;
};


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AddIntsServer>());
  rclcpp::shutdown();
  return 0;
}
