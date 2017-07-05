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



bool RAM::CompatibilityCheck(Motherboard *motherboard){
    if (motherboard->getRamtype()== this->getRamtype())
        return 1;
    else
        return 0;



}

RAM::~RAM() {

}

RAM::RAM(const std::string &name, float price, int power, const std::string &ramtype, int dimension) : Component(name, price, power), ramtype(ramtype), dimension(dimension) {};
