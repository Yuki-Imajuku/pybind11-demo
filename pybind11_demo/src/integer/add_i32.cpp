#include <pybind11/pybind11.h>
#include "../../include/integer.h"

int add_i32(int i, int j) {
    return i + j;
}

void init_add_i32(pybind11::module_ &m) {
    m.def("add_i32", &add_i32, "add 2 integers (int32)");
}
