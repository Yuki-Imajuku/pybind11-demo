#include "../../include/pybind11_demo.h"
#include "../../include/integer.h"

void init_integer(pybind11::module &m) {
    pybind11::module integer = m.def_submodule("integer");

    init_add_i16(integer);
    init_add_i32(integer);
    init_add_i64(integer);
}
