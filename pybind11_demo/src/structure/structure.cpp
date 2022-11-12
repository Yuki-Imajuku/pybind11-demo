#include "../../include/pybind11_demo.h"
#include "../../include/structure.h"

void init_structure(pybind11::module &m) {
    pybind11::module structure = m.def_submodule("structure");

    init_pet(structure);
    init_pet_public(structure);
    init_pet_private(structure);
}
