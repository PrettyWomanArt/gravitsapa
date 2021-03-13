import rclpy
from rclpy.node import Node

from std_msgs.msg import Int16, Bool


class MainNode(Node):

    def __init__(self):
        super().__init__('main_node')
        self.get_logger().info("MainNode started")
        self.eye_opened = False
        self.film_publisher = self.create_publisher(Int16, 'film_control', 10)
        self.eye_publisher = self.create_publisher(Bool, 'eye_control', 10)
        self.lips_subscription = self.create_subscription(
            Bool,
            'lips_status',
            self.lips_listener,
            10)
        self.eye_subscription = self.create_subscription(
            Bool,
            'eye_status',
            self.eye_listner_callback,
            10
        )
        
    def lips_listener(self, msg):
        self.eye_control_callback(msg)

    def eye_control_callback(self, msg):
        if msg.data and not self.eye_opened:
            # If lips are touched and eyes are closed -> open eye 
            ans = Bool()
            ans.data = True
            self.get_logger().info('Lips are touched. Initialise opening')
            self.eye_publisher.publish(ans)
        elif not msg.data and self.eye_opened:
            # If lips are not touched and eyes are opened -> close eye
            ans = Bool()
            ans.data = False
            self.get_logger().info('Ininitialise closing')
            self.eye_publisher.publish(ans)
            self.film_control_callback(16)

    def film_control_callback(self, length):
        msg = Int16()
        msg.data = length
        self.get_logger().info("Initialize film rolling")
        self.film_publisher.publish(msg)

    def eye_listner_callback(self, msg):
        if msg.data:
            self.get_logger().info('Eyes are opened')
        else:
            self.get_logger().info('Eyes are closed')
        self.eye_opened = msg.data

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