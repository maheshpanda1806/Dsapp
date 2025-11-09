#  DSA++  

> **DSA++** — A high-performance C++ library for Data Structures & Algorithms, fully accessible from **Python** using [PyBind11](https://github.com/pybind/pybind11).  
> Combine **Python’s simplicity** with **C++ execution speed**, achieving up to **5–6× faster performance** on heavy tasks.  
---

![C++17](https://img.shields.io/badge/C%2B%2B-17-blue?logo=c%2B%2B)
![Python 3.10](https://img.shields.io/badge/Python-3.10%2B-yellow?logo=python)
![PyBind11](https://img.shields.io/badge/Built%20with-PyBind11-orange)
![License: MIT](https://img.shields.io/badge/License-MIT-green)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey)

---

## Table of Contents
- [Overview](#-overview)
- [Folder Structure](#-folder-structure)
- [Build Instructions](#️-build-instructions)
- [Usage Examples](#-usage-examples)
- [Performance Benchmark](#-performance-benchmark)
- [Core Components](#-core-components)
- [Tech Stack](#-tech-stack)
- [Author](#-author)
- [License](#-license)

---

## Overview

**DSA++** was built to explore how libraries like **NumPy** and **PyTorch** connect Python with C++ for extreme performance.

It implements core **data structures and algorithms** in C++ using STL, then exposes them to Python through **PyBind11 bindings**, producing a compiled `.pyd` module you can import just like a normal Python library.

```python
from dsapp import HashMap, Stack, Queue, quick_sort

## Folder Structure
DSA++/
│
├── build/
│ ├── lib.win-amd64-3.10/
│ └── temp.win-amd64-3.10/
│
├── include/
│ └── dsapp.h # All class & function declarations
│
├── src/
│ ├── bindings.cpp # PyBind11 module definitions
│ ├── HashMap.cpp
│ ├── Queue.cpp
│ ├── Stack.cpp
│ ├── Sort.cpp
│ └── dsapp.cp310-win_amd64.pyd # Compiled binary importable in Python
│
├── sum_module.cpp/.pyd # Example: Python vs C++ sum speed test
├── test.py # Benchmark script
├── setup.py # Build script
├── sample.exe # Standalone C++ test
└── README.md


---

## Build Instructions

### Prerequisites

- **C++17 or newer**
- **Python 3.10+**
- **PyBind11**

Install PyBind11:
```bash
pip install pybind11

Build the module

From the project root:

python setup.py build_ext --inplace


This creates:

dsapp.cp310-win_amd64.pyd


Now you can directly import it in Python:

from dsapp import Stack, Queue, HashMap, quick_sort
