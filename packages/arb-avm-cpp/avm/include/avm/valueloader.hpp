/*
 * Copyright 2021, Offchain Labs, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef valueloader_hpp
#define valueloader_hpp

#include <avm_values/value.hpp>

class ValueLoader {
   public:
    // Throws an exception if the tuple cannot be loaded
    virtual value loadValue(const uint256_t&) {
        throw std::runtime_error("Default value loader impl");
    }
};

#endif /* valueloader_hpp */