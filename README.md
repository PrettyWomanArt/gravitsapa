# Картина PrettyWoman[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/Y8Y34DGGP)
**Описание:**

Проект из себя представляет картину. На картине изображен портрет страшной женщины с большими губами. 
На губах есть система смены гигиенической пленки. Губы можно поцеловать и тогда открываются глаза в которых видно красивую девушку.

**Технологии:**
- ROS
- 3D-печать
- Python

**Цель проекта:**
Реализовать идею описанную выше

**Задачи проекта:**

- Дизайн картины
- Реализация глаз
- Реализация губ
- Реализация смены пленки
- Собрать все вместе
- Нарисовать все

Схема Node ROS
![Node Scheme](/images/node_scheme_rqt.bmp)

**Картины**

Внешняя

![Node Scheme](/images/outer_pic.jpg)

Внутренняя

![Node Scheme](/images/inner_pic.jpg)

****

# Рендеры картины

![Render image](/images/render.png)

# Тестовый стенд

![Render image](/images/test_stand.jpeg)

## Старт  ROS bridge

Запустим ROS1

```shell
# Shell A (ROS 1 only):
. /pretty_woman/ro1/setup.bash
# Or, on OSX, something like:
# . ~/ros_catkin_ws/install_isolated/setup.bash
roscore
```

Запустим bridge
```shell
# Shell B (ROS 1 + ROS 2):

# Source ROS 1 first:

. /opt/ros/melodic/setup.bash

# Or, on OSX, something like:

# . ~/ros_catkin_ws/install_isolated/setup.bash

# Source ROS 2 next:

. <install-space-with-bridge>/setup.bash

# For example:

# . /opt/ros/dashing/setup.bash

export ROS_MASTER_URI=http://localhost:11311
ros2 run ros1_bridge dynamic_bridge
```

Запуск ROS

```shell
# Shell C:
. /pretty_woman/pretty_woman/setup.bash
# Or, on OSX, something like:
# . ~/ros_catkin_ws/install_isolated/setup.bash
rosrun /pretty_woman/pretty_woman/node.py 
```

