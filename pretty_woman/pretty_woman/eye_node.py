import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import Bool, String


class EyeNode(Node):
    def __init__(self):
        super().__init__('eye_node')
        self.get_logger().info('EyeNode started')
        self.eye_listener = self.create_subscription(Bool, 'eye_control', self.eye_callback, 10)
        self.eye_publisher = self.create_publisher(Bool, 'eye_status', 10)
        self.serial_send_publisher = self.create_publisher(String, 'serial_send', 10)
        self.serial_listner = self.create_subscription(String, 'serial_answer', 10)
        self.timer = self.create_timer(0.5, self.eye_status)

    def eye_callback(self, msg):
        if msg.data == True:
            self.port.write(b"o")
            self.get_logger().info("Eye are opening...")
        else:
            self.port.write(b"c")
            self.get_logger().info("Eye are closing...")

    def eye_status(self):
        msg = Bool()
        self.port.write(b"s")
        status = self.port.readline()
        if status == b"opened\n":
            msg.data = True
            self.eye_publisher.publish(msg)
        else:
            msg.data = False
            self.eye_publisher.publish(msg)
        self.get_logger().info(f"Eyes are {status}")


def main(args=None):
    rclpy.init(args=args)

    main_node = EyeNode()


    rclpy.spin(main_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    main_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
