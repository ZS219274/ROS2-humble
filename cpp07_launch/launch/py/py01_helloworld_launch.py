from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    turttle1 = Node(package='turtlesim', executable='turtlesim_node', name='turtle1')
    turttle2 = Node(package='turtlesim', executable='turtlesim_node', name='turtle2')
    return LaunchDescription([turttle1, turttle2])