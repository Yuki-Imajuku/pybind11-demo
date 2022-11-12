#include <pybind11/pybind11.h>
#include "../../include/structure.h"

class PetPrivate {
    public:
        PetPrivate(const std::string &name) : name(name) { }
        void setName(const std::string &name_) { name = name_; }
        const std::string &getName() const { return name; }

    private:
        std::string name;
};

void init_pet_private(pybind11::module_ &m) {
    pybind11::class_<PetPrivate>(m, "PetPrivate")
        .def(pybind11::init<const std::string &>())
        .def_property_readonly("name", &PetPrivate::getName)
        .def("setName", &PetPrivate::setName)
        .def("getName", &PetPrivate::getName)
        .def("__repr__",
            [](const PetPrivate &a) {
                return "<pybind11_demo.structure.PetPrivate>";
            }
        );
}
