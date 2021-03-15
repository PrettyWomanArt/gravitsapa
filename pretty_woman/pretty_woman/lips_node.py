import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import Bool, Int16


class LipsNode(Node):
    def __init__(self):
        super().__init__('lips_node')
        self.get_logger().info('LipsNode started')
        self.lips_publisher = self.create_publisher(Bool, 'lips_status', 10)
        self.port = serial.Serial("/dev/cu.usbmodem14201", 115200)
        self.timer = self.create_timer(0.5, self.lips_callback)

    def lips_callback(self):
        self.port.write(b'eye_status')
        ans = self.port.readline()
        if ans == b'touched':
            msg =Bool()
            msg.data = True
            self.lips_publisher.publish(msg)
        else:
            msg = Bool()
            msg.data = False
            self.lips_publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    lips_node = LipsNode()


    rclpy.spin(lips_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    lips_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
