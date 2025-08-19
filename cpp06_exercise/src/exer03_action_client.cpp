#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/action/real_time_distance.hpp"
#include "turtlesim/msg/pose.hpp"

class RealtimeDistanceActionClient : public rclcpp::Node {
public:
    explicit RealtimeDistanceActionClient(const rclcpp::NodeOptions &options = rclcpp::NodeOptions() ) 
        : Node("realtime_distance_action_client", options)
    {
        RCLCPP_INFO(this->get_logger(), "RealtimeDistanceActionClient 已经创建...");
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RealtimeDistanceActionClient>());
    rclcpp::shutdown();
    return 0;
}