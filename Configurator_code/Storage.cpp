//
// Created by aleda on 29/06/2017.
//

#include "Storage.h"

Storage::Storage(const std::string &name, double price, int capacity, bool ssd) : Component(name, price
                                                                                                       ),
                                                                                             capacity(capacity),
                                                                                             ssd(ssd) {}

int Storage::getCapacity() const {
    return capacity;
}

bool Storage::isSsd() const {
    return ssd;
}
