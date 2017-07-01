//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_STORAGE_H
#define CONFIGURATOR_CODE_STORAGE_H

#include"Component.h"

class Storage : public Component {
public:
    Storage(const std::string &name, double price, int capacity, bool ssd);

    int getCapacity() const;

    bool isSsd() const;

private:
    int capacity;
    bool ssd;
    int power=10;

};


#endif //CONFIGURATOR_CODE_STORAGE_H
