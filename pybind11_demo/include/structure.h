#pragma once
#include <pybind11/pybind11.h>

void init_pet(pybind11::module_ &);
void init_pet_public(pybind11::module_ &);
void init_pet_private(pybind11::module_ &);
