//
// Created by aleda on 29/06/2017.
//

#include "Storage.h"


int Storage::getCapacity() const {
    return capacity;
}

bool Storage::isSsd() const {
    return ssd;
}

Storage::~Storage() {

}

Storage::Storage(const std::string &name, float price, int power, int capacity, bool ssd) : Component(name, price, power), capacity(capacity), ssd(ssd) {}
