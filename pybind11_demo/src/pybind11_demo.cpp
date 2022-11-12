#include "../include/pybind11_demo.h"

PYBIND11_MODULE(pybind11_demo, m) {
    m.doc() = "pybind11 demonstraction";

    init_integer(m);
    init_structure(m);
}
