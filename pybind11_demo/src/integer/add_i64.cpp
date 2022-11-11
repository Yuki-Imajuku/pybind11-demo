#include <pybind11/pybind11.h>
#include "../../include/integer.h"

long long add_i64(long long i, long long j) {
    return i + j;
}

void init_add_i64(pybind11::module_ &m) {
    m.def("add_i64", &add_i64, "add 2 integers (int64)");
}
