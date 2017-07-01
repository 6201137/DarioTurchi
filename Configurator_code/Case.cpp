//
// Created by aleda on 29/06/2017.
//

#include "Case.h"

Case::Case(const std::string &name, double price, const std::string &size) : Component(name, price),
                                                                                        size(size) {}
bool Case::CompatibilityCheck(){}

const std::string &Case::getSize() const {
    return size;
};
