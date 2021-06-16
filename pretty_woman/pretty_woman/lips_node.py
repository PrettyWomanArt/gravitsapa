"""Модуль губ

В модуле описывается класс ноды губ. Также в модуле происходит инициализация ноды
при запуске. Нода описывает логику поведения губ картины.

    * main - главная функция, инициализирует ноду
"""
import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import Bool, Int16, String


class LipsNode(Node):
    """Нода описания поведения глаз.

    Нода, отвечающая за обработку логики поведения глаз. Управляется с
    помощью топика 'eye_control'. Если в топик оправляется сообщение True
    нода запускает открытие глаз через топик 'serial_send'. Соответсвенно при получении значения
    False запускается алгоритм закрытия глаз. Статус глаз (закрыты/открыты)
    публикуется в топик 'eye_status', синхронизируется с топиком 'serial_answer'

    Атрибуты
    ----------
    lips_publisher : rclpy.publisher.Publisher
        паблишер в топик 'lips_status'
    serial_send_publisher : rclpy.publisher.Publisher
        паблишер в топик 'serial_send'
    serial_listener : rclpy.subscription.Subscription
        слушатель топика 'serial_answer'
    timer : rclpy.timer.Timer
        таймер статуса 'eye_status'

    Методы
    -------
    eye_callback(msg)
        Публикует статус глаз (открыты/закрыты) в топик 'lips_status' по таймеру
        каждые полсекунды

    SideEffects
    -----------
    Логирование
    """
    def __init__(self):
        super().__init__('lips_node')
        self.get_logger().info('LipsNode started')
        self.lips_publisher = self.create_publisher(Bool, 'lips_status', 10)
        self.serial_send_publisher = self.create_publisher(String, 'serial_send', 10)
        self.serial_listner = self.create_subscription(String, 'serial_answer', 10)
        self.timer = self.create_timer(0.5, self.lips_callback)

    def lips_callback(self):
        """Таймер-метод статуса губ

        Метод заправшивает статус через 'serial_send_publisher' и публикует
        сообщение о статусе глаз каждые полсекунды в топик 'lips_status'

        SideEffects
        -----------
        Публикует статус в лог
        """
        msg = String()
        msg.data = "lips_status"
        self.serial_send_publisher.publish(msg)
        ans = self.serial_listner.readline()
        if ans == b'touched':
            msg = Bool()
            msg.data = True
            self.lips_publisher.publish(msg)
        else:
            msg = Bool()
            msg.data = False
            self.lips_publisher.publish(msg)


def main(args=None):
    """Инициализация и уничтожение ноды
    
    Функция инициализирует ноду. В конце работы уничтожает ноду в ручном режиме.
    """
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
