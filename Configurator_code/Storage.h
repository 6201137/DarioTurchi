//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_STORAGE_H
#define CONFIGURATOR_CODE_STORAGE_H

#include"Component.h"

class Storage : public Component {
public:
    Storage(const std::string &name, float price, int power, int capacity, bool ssd);

    virtual ~Storage();

    int getCapacity() const;

    bool isSsd() const;

private:
    int capacity;
    bool ssd;

};


#endif //CONFIGURATOR_CODE_STORAGE_H
