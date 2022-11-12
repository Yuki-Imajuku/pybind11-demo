#include <pybind11/pybind11.h>
#include "../../include/structure.h"

class PetPublic {
    public:
        PetPublic(const std::string &name) : name(name) { }
        void setName(const std::string &name_) { name = name_; }
        const std::string &getName() const { return name; }
        std::string name;
};

void init_pet_public(pybind11::module_ &m) {
    pybind11::class_<PetPublic>(m, "PetPublic")
        .def(pybind11::init<const std::string &>())
        .def_readwrite("name", &PetPublic::name)
        .def("setName", &PetPublic::setName)
        .def("getName", &PetPublic::getName)
        .def("__repr__",
            [](const PetPublic &a) {
                return "<pybind11_demo.structure.PetPublic named '" + a.name + "'>";
            }
        );
}
