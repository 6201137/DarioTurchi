//
// Created by aleda on 29/06/2017.
//

#include "Motherboard.h"
#include <iostream>
#include<string>
const std::string &Motherboard::getSocket() const {
    return socket;
}

const std::string &Motherboard::getChipset() const {
    return chipset;
}

bool Motherboard::isOc() const {
    return oc;
}

const std::string &Motherboard::getSize() const {
    return size;
}

const std::string &Motherboard::getRamtype() const {
    return ramtype;
}




bool Motherboard::CompatibilityCheck(CPU* CPU){
     if((CPU->getSocket()==this->getSocket()) && CPU->isOc() == this->isOc())
         return 1;
     else
         return 0;
}

Motherboard::Motherboard(const std::string &name, float price, const std::string &socket,
                         const std::string &chipset, bool oc, const std::string &size, const std::string &ramtype)
        : Component(name, price), socket(socket), chipset(chipset), oc(oc), size(size), ramtype(ramtype) {}

Motherboard::~Motherboard() {

};