//*****************************************************************************
// Copyright 2019 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//*****************************************************************************

#include <pybind11/complex.h>
#include <pybind11/operators.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "pyseal/kswitchkeys.hpp"
#include "pyseal/pyseal.hpp"
#include "pyseal/relinkeys.hpp"
#include "seal/seal.h"

using namespace seal;
using namespace pybind11::literals;
namespace py = pybind11;

void regclass_pyseal_RelinKeys(py::module& m) {
  py::class_<RelinKeys, KSwitchKeys> relin_keys(m, "RelinKeys");
  relin_keys.def(py::init<>());
  relin_keys.def(py::init<const RelinKeys&>());
  relin_keys.def("get_index", &RelinKeys::get_index);
  relin_keys.def("has_key", &RelinKeys::has_key);
  relin_keys.def("key", &RelinKeys::key);
}
