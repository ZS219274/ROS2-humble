from setuptools import find_packages
from setuptools import setup

setup(
    name='demo_interfaces_base',
    version='0.0.0',
    packages=find_packages(
        include=('demo_interfaces_base', 'demo_interfaces_base.*')),
)
