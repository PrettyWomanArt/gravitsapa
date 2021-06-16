"""Модуль системы подачи пленки

В модуле описывается класс ноды пленки. Также в модуле происходит инициализация ноды
при запуске. Нода описывает логику поведения системы подачи пленки.

    * main - главная функция, инициализирует ноду
"""
import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import Bool, Int16


class FilmNode(Node):
    """Нода описания поведения системы подачи пленки.

    Нода, отвечающая за обработку логики системы подачи пленки. Управляется с
    помощью топика 'film_control'. Необходимо оправить сообщение с длиной
    на которую необходимо открутить пленку в формате std_msgs.msg.Int16 в топик 
    'film_control'. Далее на ноду управления серийным портом отправляется сообщение
    для откручивания пленки на заданную длину.

    Атрибуты
    ----------
    film_listener : rclpy.subscription.Subscription
        слушатель топика 'film_control'
    serial_send_publisher : rclpy.publisher.Publisher
        паблишер в топик 'serial_send'

    Методы
    -------
    film_callback(msg)
        Получает сообщения из топика 'film_control' и исполняет логику системы 
        подачи пленки

    SideEffects
    -----------
    Логирование
    """
    def __init__(self):
        super().__init__('film_node')
        self.get_logger().info('FilmNode started')
        self.serial_send_publisher = self.create_publisher(String, 'serial_send', 10)
        self.film_listener = self.create_subscription(Int16, 'film_control', self.film_callback, 10)

    def film_callback(self, msg: Int16):
        """Колбек топика 'film_control'.

        Метод реализует логику управления глазами. Параметр :param:msg 
        несет значение длины пленки. В топик 'serial_send' отправляется сообщение
        с необходимой длиной.

        Параметры
        ----------
        msg : std_msgs.msg.Int16
            сообщение с длиной пленки

        SideEffects
        -----------
        При получении сообщения логирует действие
        """
        self.serial_send_publisher.write(byte("stepper_" + str(msg.data)))
        self.get_logger().info(f'FilmNode commanded length {msg.data}')


def main(args=None):
    """Инициализация и уничтожение ноды
    
    Функция инициализирует ноду. В конце работы уничтожает ноду в ручном режиме.
    """
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
