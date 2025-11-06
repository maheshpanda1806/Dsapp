#include "../include/dsapp.h"

PYBIND11_MODULE(dsapp, m) {
    m.doc() = "DSA++ Library — Implement DSA in C++ and use from Python";

    py::class_<HashMap>(m, "HashMap")
        .def(py::init<>())
        .def("put", &HashMap::put)
        .def("get", &HashMap::get)
        .def("contains", &HashMap::contains)
        .def("remove", &HashMap::remove)
        .def("size", &HashMap::size)
        .def("keys", &HashMap::keys)
        .def("clear", &HashMap::clear);

    py::class_<Stack>(m, "Stack")
        .def(py::init<>())
        .def("push", &Stack::push)
        .def("pop", &Stack::pop)
        .def("top", &Stack::top)
        .def("empty", &Stack::empty)
        .def("size", &Stack::size);

    py::class_<Queue>(m, "Queue")
        .def(py::init<>())
        .def("push", &Queue::push)
        .def("pop", &Queue::pop)
        .def("front", &Queue::front)
        .def("empty", &Queue::empty)
        .def("size", &Queue::size);

    m.def("quick_sort", &quick_sort, "Quick sort on a list of numbers");
}
