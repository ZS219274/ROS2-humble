#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/srv/calculation.hpp"

using namespace std::placeholders;
using calculation = demo_interfaces_base::srv::Calculation;
class MyServer : public rclcpp::Node {
public:
  MyServer() : Node("demo_server") {
    service_ =  this->create_service<demo_interfaces_base::srv::Calculation>("service",
      std::bind(&MyServer::run, this, _1, _2));
  }

private:
  rclcpp::Service<demo_interfaces_base::srv::Calculation>::SharedPtr service_;
  void run(const calculation::Request::SharedPtr req, const calculation::Response::SharedPtr res) {
    RCLCPP_INFO(this->get_logger(), "received num1: %d, num2: %d", req->num1, req->num2);
    res->sum = req->num1 + req->num2;
    RCLCPP_INFO(this->get_logger(), "send sum: %d", res->sum);
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MyServer>());
  rclcpp::shutdown();
  return 0;
}
