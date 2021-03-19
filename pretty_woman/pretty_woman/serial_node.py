import rclpy
from rclpy.node import Node
import serial
from example_interfaces.srv import AddTwoInts

from std_msgs.msg import String


class SerialNode(Node):
    def __init__(self):
        super().__init__('serial_node')
        self.get_logger().info('SerialNode started')
        self.serial_listener = self.create_subscription(String, 'serial_send', self.send_callback, 10)
        self.serial_service = self.create_service(AddTwoInts, 'serial_service', self.send_and_read)
        self.serial_publisher = self.create_publisher(String, 'serial_answer', 10)
        self.port = serial.Serial("/dev/cu.usbmodem14201", 115200)

    def send_callback(self, msg):
        self.port.write(bytes(msg.data))
        self.get_logger().info(f"Message {msg.data} send")

    def send_and_read(self, request, response):
        ans = String
        if request.a == 1:
            pass
        self.port.write(bytes(msg.data))
        self.get_logger().info(f"Message {msg.data} send")
        response = self.port.readline()
        self.get_logger().info(f"Received {response.data}")
        ans = String(str(response))
        self.serial_publisher.publish(ans)


def main(args=None):
    rclpy.init(args=args)

    serial_node = SerialNode()


    rclpy.spin(serial_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
