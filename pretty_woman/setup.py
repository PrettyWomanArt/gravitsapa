from setuptools import setup

package_name = 'pretty_woman'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='grigorijhanin',
    maintainer_email='hanin.grisha2000@gmail.com',
    description='Main node of PrettyWoman',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'minimal_publisher = pretty_woman.minimal_publisher:main',
            'minimal_subscriber = pretty_woman.minimal_subscriber:main',
            'main_node = pretty_woman.main_node:main',
            'test_node = pretty_woman.test_node:main',
            'eye_node = pretty_woman.eye_node:main',
            'film_node = pretty_woman.film_node:main',
            'lips_node = pretty_woman.lips_node:main'
        ],
    },
)
