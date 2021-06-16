"""Модуль глаз

В модуле описывается класс ноды глаз. Также в модуле происходит инициализация ноды
при запуске. Нода описывает логику поведения глаз картины.

    * main - главная функция, инициализирует ноду
"""
import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import Bool, String


class EyeNode(Node):
    """Нода описания поведения глаз.

    Нода, отвечающая за обработку логики поведения глаз. Управляется с
    помощью топика 'eye_control'. Если в топик оправляется сообщение True
    нода запускает открытие глаз через топик 'serial_send'. Соответсвенно при получении значения
    False запускается алгоритм закрытия глаз. Статус глаз (закрыты/открыты)
    публикуется в топик 'eye_status', синхронизируется с топиком 'serial_answer'

    Атрибуты
    ----------
    eye_listener : rclpy.subscription.Subscription
        слушатель топика 'eye_control'
    eye_publisher : rclpy.publisher.Publisher
        паблишер в топик 'eye_status'
    serial_send_publisher : rclpy.publisher.Publisher
        паблишер в топик 'serial_send'
    serial_listener : rclpy.subscription.Subscription
        слушатель топика 'serial_answer'
    timer : rclpy.timer.Timer
        таймер статуса 'eye_status'

    Методы
    -------
    eye_callback(msg)
        Получает сообщения из топика 'eye_control' и исполняет логику глаз
    eye_status()
        Отправляет статус глаз в топик 'eye_status' по таймеру

    SideEffects
    -----------
    Логирование
    """
    def __init__(self):
        super().__init__('eye_node')
        self.get_logger().info('EyeNode started')
        self.eye_listener = self.create_subscription(Bool, 'eye_control', self.eye_callback, 10)
        self.eye_publisher = self.create_publisher(Bool, 'eye_status', 10)
        self.serial_send_publisher = self.create_publisher(String, 'serial_send', 10)
        self.serial_listner = self.create_subscription(String, 'serial_answer', 10)
        self.timer = self.create_timer(0.5, self.eye_status)

    def eye_callback(self, msg):
        """Колбек топика 'eye_control'.

        Метод реализует логику управления глазами. Если параметр :param:msg 
        несет значение True, в топик 'serial_send' отправляется сообщение
        открытия. Если параметр :param:msg несет значение False, в топик 
        'serial_send' отправляется сообщения закрытия.

        Параметры
        ----------
        msg : std_msgs.msg.Bool
            сообщение отправленное в топик

        SideEffects
        -----------
        При получении сообщения логирует действие
        """
        if msg.data == True:
            self.serial_send_publisher.write(b"o")
            self.get_logger().info("Eye are opening...")
        else:
            self.serial_send_publisher.write(b"c")
            self.get_logger().info("Eye are closing...")

    def eye_status(self):
        """Таймер-метод статуса глаз

        Метод отправляет сообщение в топик 'serial_send' с сообщением
        на получение статуса глаз и слушает ответ в топике 'serial_answer'
        Публикует статус в топик 'eye_status'

        SideEffects
        -----------
        Публикует статус в лог
        """
        msg = Bool()
        self.serial_send_publisher.publish(b"s")
        status = self.serial_listner.listen()
        if status == b"opened\n":
            msg.data = True
            self.eye_publisher.publish(msg)
        else:
            msg.data = False
            self.eye_publisher.publish(msg)
        self.get_logger().info(f"Eyes are {status}")


def main(args=None):
    """Инициализация и уничтожение ноды
    
    Функция инициализирует ноду. В конце работы уничтожает ноду в ручном режиме.
    """
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
