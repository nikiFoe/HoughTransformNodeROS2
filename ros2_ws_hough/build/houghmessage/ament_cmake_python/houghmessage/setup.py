from setuptools import find_packages
from setuptools import setup

setup(
    name='houghmessage',
    version='0.0.0',
    packages=find_packages(
        include=('houghmessage', 'houghmessage.*')),
)
