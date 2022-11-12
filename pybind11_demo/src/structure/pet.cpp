#include <pybind11/pybind11.h>
#include "../../include/structure.h"

class Pet {
    public:
        Pet(const std::string &name) : name(name) { }
        void setName(const std::string &name_) { name = name_; }
        const std::string &getName() const { return name; }
        std::string name;
};

void init_pet(pybind11::module_ &m) {
    pybind11::class_<Pet>(m, "Pet")
        .def(pybind11::init<const std::string &>())
        .def("setName", &Pet::setName)
        .def("getName", &Pet::getName)
        .def("__repr__",
            [](const Pet &a) {
                return "<pybind11_demo.structure.Pet named '" + a.name + "'>";
            }
        );
}
