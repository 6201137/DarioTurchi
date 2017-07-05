//
// Created by aleda on 05/07/2017.
//

#include "AssembledPCDecorator.h"
PSU *AssembledPCDecorator::getPSU1() const {
    return PSU1;
}


bool AssembledPCDecorator::compatibilityCheck() {

    int PSUPower = this->getPSU1()->getPower();
    int realPower = this->totalWatt();
    if(PSUPower>= realPower)
        return 1;
    else
        return 0;
}

float AssembledPCDecorator::totalCost() {
    float total=0;
    total +=(_assembledPC->getCPU1())->getPrice();
    total +=(_assembledPC->getMotherboard1())->getPrice();
    total +=(_assembledPC->getRAM())->getPrice();
    total +=(_assembledPC->getCase1())->getPrice();
    total +=(this->PSU1)->getPrice();
    total +=(_assembledPC->getStorage())->getPrice();
    total +=(_assembledPC->getGPU1())->getPrice();

    return total;
}

int AssembledPCDecorator::totalWatt() {
    int total=0;
    total +=(_assembledPC->getRAM())->getPower();
    total +=(_assembledPC->getCPU1())->getPower();
    total +=(_assembledPC->getMotherboard1())->getPower();
    total +=(_assembledPC->getGPU1())->getPower();
    total +=(_assembledPC->getCase1())->getPower();
    total +=(_assembledPC->getStorage())->getPower();

    return total;
}

void AssembledPCDecorator::setPSU1(PSU *PSU1) {
    AssembledPCDecorator::PSU1 = PSU1;
}
