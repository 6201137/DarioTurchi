//
// Created by aleda on 29/06/2017.
//

#include "PSU.h"



int PSU::getPower2use() const {
    return power2use;
}

bool PSU::CompatibilityCheck(){}

PSU::PSU(const std::string &name, double price, int power2use) : Component(name, price),
                                                                            power2use(power2use) {}
