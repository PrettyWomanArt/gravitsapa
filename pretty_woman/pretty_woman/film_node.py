import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import Bool, Int16


class FilmNode(Node):
    def __init__(self):
        super().__init__('film_node')
        self.get_logger().info('FilmNode started')
        self.film_listener = self.create_subscription(Int16, 'film_control', self.film_callback, 10)
        self.port = serial.Serial("/dev/cu.usbmodem14201", 115200)

    def film_callback(self, msg):
        data = bytes(msg.data)
        self.port.write(data)


def main(args=None):
    rclpy.init(args=args)

    film_node = FilmNode()


    rclpy.spin(film_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    film_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
