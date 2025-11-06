from setuptools import setup, Extension
import pybind11
import sys
import os

compile_args = ["/O2"] if sys.platform == "win32" else ["-O3"]

ext_modules = [
    Extension(
        "dsapp",
        sources=[
            "src/bindings.cpp",
            "src/HashMap.cpp",
            "src/Stack.cpp",
            "src/Queue.cpp",
            "src/Sort.cpp",
        ],
        include_dirs=[
            pybind11.get_include(),
            "include",
        ],
        language="c++",
        extra_compile_args=compile_args,
    )
]

setup(
    name="dsapp",
    version="0.1.0",
    description="DSA++: Implement DSA in C++ and call from Python",
    ext_modules=ext_modules,
)
