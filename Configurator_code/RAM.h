//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_RAM_H
#define CONFIGURATOR_CODE_RAM_H

#include "Component.h"

class RAM : public Component {
public:
    RAM(const std::string &name, double price, const std::string &ramtype, int dimension);

    const std::string &getRamtype() const;

    int getDimension() const;

private:
    std::string ramtype;
    int dimension;
    int power=10;
    bool CompatibilityCheck();

};


#endif //CONFIGURATOR_CODE_RAM_H
