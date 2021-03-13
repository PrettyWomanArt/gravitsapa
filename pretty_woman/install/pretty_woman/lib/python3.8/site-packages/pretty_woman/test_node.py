import rclpy
from rclpy.node import Node
import time
import threading

from std_msgs.msg import Int16, Bool


class TestNode(Node):
    def __init__(self):
        super().__init__('test_node')
        self.get_logger().info("TestNode started")
        self.eye_publisher = self.create_publisher(Bool, 'eye_status', 10)
        self.lips_publisher = self.create_publisher(Bool, 'lips_status', 10)
        self.film_subscription = self.create_subscription(Int16, 'film_control', self.film_listener, 10)
        self.eye_subscription = self.create_subscription(Bool, 'eye_control', self.eye_listener, 10)
        loop = threading.Thread(target=self.loop)
        loop.start()

    def film_listener (self, msg):
        self.get_logger().info(f"Rolling film {msg.data} meters")

    def eye_listener(self, msg):
        if msg.data:
            self.get_logger().info("Eyes are commanded to open")
            time.sleep(1)
            ans = Bool()
            ans.data = True
            self.eye_publisher.publish(ans)
            self.get_logger().info("Eyes are opened")
        else:
            self.get_logger().info("Eyes are commanded to close")
            time.sleep(1)
            ans = Bool()
            ans.data = False
            self.eye_publisher.publish(ans)
            self.get_logger().info("Eyes are closed")

    def loop(self):
        while True:
            msg = Bool()
            msg.data = True
            self.lips_publisher.publish(msg)
            self.get_logger().info("Lips are touched")
            time.sleep(3)
            msg.data = False
            self.lips_publisher.publish(msg)
            self.get_logger().info("Lips are not touched")
            time.sleep(3)
            

def main(args=None):
    rclpy.init(args=args)

    main_node = TestNode()


    rclpy.spin(main_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    main_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()