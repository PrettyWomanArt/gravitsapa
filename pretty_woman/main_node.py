import rclpy
from rclpy.node import Node

from std_msgs.msg import String, Int16, Bool


class MainNode(Node):

    def __init__(self):
        super().__init__('main_node')
        self.film_publisher = self.create_publisher(Int16, 'film', 10)
        self.eye_publisher = self.create_publisher(Bool, 'eye', 10)
        self.subscription = self.create_subscription(
            String,
            'lips',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.i = 0

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

    def timer_callback(self):
        msg = Int16()
        msg.data = self.i
        self.film_publisher.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    main_node = MainNode()

    rclpy.spin(main_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    main_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()