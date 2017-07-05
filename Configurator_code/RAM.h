//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_RAM_H
#define CONFIGURATOR_CODE_RAM_H

#include "Motherboard.h"
#include "Component.h"

class RAM : public Component {
public:
    RAM(const std::string &name, float price, int power, const std::string &ramtype, int dimension);

    virtual ~RAM();

    const std::string &getRamtype() const;

    int getDimension() const;
    bool CompatibilityCheck(Motherboard *motherboard);
private:
    std::string ramtype;
    int dimension;


};


#endif //CONFIGURATOR_CODE_RAM_H
