"""Модуль главной ноды

В модуле описывается класс главной ноды. Нода осуществляется
общую логику поведения, связывает все компоненты общим алгоритмом.
Также в модуле происходит инициализация ноды при запуске. Нода 
описывает логику поведения глаз картины.

Алгоритм действия
-----------------
Когда пользователь прикосается к губам срабатывает датчик прикосновения.
Затем открываются глаза, они остаются открытыми до тех пор пока датчик не
будет отжат. После отжатия датчика отматывается пленка. 

    * main - главная функция, инициализирует ноду
"""
import rclpy
from rclpy.node import Node

from std_msgs.msg import String, Int16, Bool


class MainNode(Node):
    """Нода отвечает за общую логику поведения.

    Нода, отвечающая за обработку логики поведения всей картины.
    Когда пользователь прикосается к губам значение в топик lips_status поступает
    сообщение типа std_msgs.msg.Bool со значением True. За обработку этого сообещния
    отвечает callback attr::lips_listner, он передает сообщение в функцию 
    eye_control_callback, которая запускает открывание глаз. При отжатии датчика
    происходит тот же алгоритм, только eye_callback дополнительно передает 
    сообщение в film_control_callback для отматывания пленки

    Атрибуты
    ----------
    eye_opened : bool
        статус глаз (true - открыты, false - закрыты)
    film_publisher : rclpy.publisher.Publisher
        паблишер топика 'film_control'
    eye_publisher : rclpy.publisher.Publisher
        паблишер в топик 'eye_control'
    lips_subscription : rclpy.subscription.Subscription
        слушатель топика 'lips_status'
    eye_subscription : rclpy.subscription.Subscription
        слушатель топика 'eye_status'

    Методы
    -------
    lips_listener(msg)
        Получает сообщения из топика 'lips_status' и исполняет передает
        и передает ее в attr::eye_control_callback
    eye_control_callback(msg)
        Выполняет логику глаз.
    eye_status()
        Отправляет статус глаз в топик 'eye_status' по таймеру
    film_control_callback(length)
        Выполняет логику системы подачи пленки.
    eye_listener_callback(msg)
        Отслеживает статус глаз из топика 'eye_status'.

    SideEffects
    -----------
    Логирование
    """
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
            self.eye_listener_callback,
            10
        )
        
    def lips_listener(self, msg: Bool):
        """Выполняет логику губ.

        Метод выполняет логику управления губами. Метод получает состояние губ из
        топика 'lips_status' и передает его в метод :attr:self.eye_control_callback

        Параметры
        ----------
        msg : std_msgs.msg.Bool
            сообщение об со статусом губ

        SideEffects
        -----------
        Логирует действие
        """
        if msg.data:
            self.get_logger().info('Lips are touched')
        else:
            self.get_logger().info('Lips are untouched')
        self.eye_control_callback(msg)

    def eye_control_callback(self, msg: Bool):
        """Выполняет логику глаз.

        Метод реализует логику управления глазами. Если параметр :param:msg 
        несет значение True, и :attr:self.eye_opened равен False в топик 'eye_control'
        отправляется сообщение std_msgs.msg.Bool со значение True.
        Если параметр :param:msg несет значение False и :attr:self.eye_opened несет 
        значение True в топик 'eye_control' отправляется сообщение std_msgs.msg.Bool
        со значение False и в функцию :attr:self.film_control_callback 
        передается значение длины пленки для откручивания

        Параметры
        ----------
        msg : std_msgs.msg.Bool
            сообщение об изменении положения глаз

        SideEffects
        -----------
        Логирует действие
        """
        if msg.data and not self.eye_opened:
            # If lips are touched and eyes are closed -> open eye 
            ans = Bool()
            ans.data = True
            self.get_logger().info('Initialise opening')
            self.eye_publisher.publish(ans)
        elif not msg.data and self.eye_opened:
            # If lips are not touched and eyes are opened -> close eye
            ans = Bool()
            ans.data = False
            self.get_logger().info('Ininitialise closing')
            self.eye_publisher.publish(ans)
            self.film_control_callback(16)

    def film_control_callback(self, length: int):
        """Выполняет логику системы подачи пленки.

        Метод реализует логику управления системой подачи пленки. Значение :param:length
        передается упаковывается в std_msgs.msg.Int16 и передается в топик 'film_control'

        Параметры
        ----------
        length : int
            длина пленки

        SideEffects
        -----------
        Логирует действие
        """
        msg = Int16()
        msg.data = length
        self.get_logger().info("Initialize film rolling")
        self.film_publisher.publish(msg)

    def eye_listener_callback(self, msg: Bool):
        """Отслеживает статус глаз

        Метод подписан на топик 'eye_status'. Если статус в топике отличается
        от статуса в поле :attr:self.eye_opened метод меняет значение поля

        Параметры
        ----------
        msg : std_msgs.msg.Bool
            длина пленки

        SideEffects
        -----------
        Логирует действие
        """
        if msg.data != self.eye_opened:
            if msg.data:
                self.get_logger().info('Eyes are opened')
            else:
                self.get_logger().info('Eyes are closed')
            self.eye_opened = msg.data


def main(args=None):
    """Инициализация и уничтожение ноды
    
    Функция инициализирует ноду. В конце работы уничтожает ноду в ручном режиме.
    """
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