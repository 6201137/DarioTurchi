//
// Created by aleda on 29/06/2017.
//

#include "RAM.h"



const std::string &RAM::getRamtype() const {
    return ramtype;
}

int RAM::getDimension() const {
    return dimension;
}

RAM::RAM(const std::string &name, double price, const std::string &ramtype, int dimension) : Component(name,
                                                                                                                  price
                                                                                                                  ),
                                                                                                        ramtype(ramtype),
                                                                                                        dimension(
                                                                                                                dimension) {}

bool CompatibilityCheck(){};
