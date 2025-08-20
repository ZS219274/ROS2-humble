from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    t = Node(package='turtlesim', executable='turtlesim_node')    
    p = Node(package='cpp06_exercise', executable='exer04_param')
    return LaunchDescription([t, p])