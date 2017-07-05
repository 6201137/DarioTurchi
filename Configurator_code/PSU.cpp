//
// Created by aleda on 29/06/2017.
//

#include "PSU.h"
#include "AssembledPCDecorator.h"



int PSU::getPower2use() const {
    return power2use;
}
/*
bool PSU::CompatibilityCheck(AssembledPCDecorator *assembledPCDecorator){
    int realPower = assembledPCDecorator->totalWatt();
    if(this->getPower()>=realPower)
        return 1;
    else
        return 0;

}*/


PSU::~PSU() {

}

PSU::PSU(const std::string &name, float price, int power, int power2use) : Component(name, price, power),
                                                                           power2use(power2use) {}
