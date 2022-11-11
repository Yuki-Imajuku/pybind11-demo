#include <pybind11/pybind11.h>
#include "../../include/integer.h"

short add_i16(short i, short j) {
    return i + j;
}

void init_add_i16(pybind11::module_ &m) {
    m.def("add_i16", &add_i16, "add 2 integers (int16)");
}
