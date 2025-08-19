from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    x = 6
    y = 9
    theta = 0.0
    name = "t2"
    # 1. 在目标点生成一只新乌龟
    # ros2 service call turtlesim/srv/Spawn turtlesim/srv/Spawn "{x: 6, y: 9, theta: 0.0, name: t2}"
    spawn = ExecuteProcess(
        cmd=["ros2 service call /spawn turtlesim/srv/Spawn \"{'x': "
             + str(x) + ", 'y':" +str(y)
             + ", 'theta':" + str(theta)
             + ",'name':" + name + "}\""],
        output = "both",
        shell = True
    )
    # 2. 调用客户端发送目标点坐标
    client = Node(
        package='cpp06_exercise',
        executable='exer02_client',
        arguments = [str(x), str(y), str(theta)] #相当于执行了这个指令ros2 run cpp06_exercise exer02_client x y 0.0
    )
    return LaunchDescription([spawn, client])