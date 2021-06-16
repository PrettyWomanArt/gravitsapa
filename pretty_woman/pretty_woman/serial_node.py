"""Модуль ноды сериал порта

Нода осуществляет взаимодействие между нодами ROS и arduino. На ноду
отправляется сообщение с типовой командом, которую выполняет  arduino.
Если сообщение подразумевает ответ, то ответ публикуется в топике

    * main - главная функция, инициализирует ноду
"""
import rclpy
from rclpy.node import Node
import serial

from std_msgs.msg import String


class SerialNode(Node):
    """Нода отвечает за взаимодействие с arduino через серийный порт.

    Управляется с помощью топика 'serial_send', ответ можно получить через топик
    'serial_answer'. Команда из топика 'serial_send' отправляется на Arduino через 
    серийный порт

    Таблица команд
    --------------
    ---------------------------------------
    | Команда   | Описание                | 
    ---------------------------------------
    | o         | Открыть глаза           | 
    ---------------------------------------
    | с         | Закрыть глаза           | 
    ---------------------------------------
    | es        | Статут глаз             |
    ---------------------------------------
    | ls        | Статус губ              | 
    ---------------------------------------
    | f'длина'  | Отмотать пленку         | 
    --------------------------------------- 
 
    Атрибуты
    ----------
    serial_listener : rclpy.subscription.Subscription
        слушатель топика 'serial_send'
    serial_publisher : rclpy.publisher.Publisher
        паблишер в топик 'serial_answer'
    port : serial.Serial
        порт для общения с Arduino

    Методы
    -------
    send_callback(msg)
        Получает сообщения из топика 'serial_send'

    SideEffects
    -----------
    Логирование
    """
    def __init__(self):
        super().__init__('serial_node')
        self.get_logger().info('SerialNode started')
        self.serial_listener = self.create_subscription(String, 'serial_send', self.send_callback, 10)
        self.serial_publisher = self.create_publisher(String, 'serial_answer', 10)
        self.port = serial.Serial("/dev/cu.usbmodem14201", 115200)

    def send_callback(self, msg):
        """Колбек топика 'serial_send'.

        Метод реализует общение между нодами ROS и Arduino. В параметре :param:msg
        содержиться одна из команд описанных выше. Метод отправляет команду через 
        серийный порт :attr:self.port

        Параметры
        ----------
        msg : std_msgs.msg.String
            сообщение с командой отправленное в топик

        SideEffects
        -----------
        При получении сообщения логирует действие
        """
        self.port.write(bytes(msg.data))
        self.get_logger().info(f"Message {msg.data} send")


def main(args=None):
    """Инициализация и уничтожение ноды
    
    Функция инициализирует ноду. В конце работы уничтожает ноду в ручном режиме.
    """
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
