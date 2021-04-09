from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pretty_woman',
            namespace='eye',
            executable='eye_node',
            name='sim'
        ),
        Node(
            package='pretty_woman',
            namespace='main',
            executable='main_node',
            name='sim'
        ),
        Node(
            package='pretty_woman',
            namespace='lips',
            executable='lips_node',
            name='sim'
        ),
        Node(
            package='pretty_woman',
            namespace='film',
            executable='film_node',
            name='sim'
        ),
        Node(
            package='pretty_woman',
            namespace='serial',
            executable='serial_node',
            name='sim'
        ),
    ])