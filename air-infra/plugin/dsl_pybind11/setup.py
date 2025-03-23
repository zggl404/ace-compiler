"""
Provides necessary Python setup.
"""
from setuptools import setup, find_packages

setup(
    name='instantiator',
    version='0.0.1',
    packages=find_packages(include=['instantiator', 'instantiator/*']),
    install_requires=[],
)
