from setuptools import find_packages
from setuptools import setup

setup(
    name='ts_example_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('ts_example_msgs', 'ts_example_msgs.*')),
)
