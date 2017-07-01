//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_COMPONENT_H
#define CONFIGURATOR_CODE_COMPONENT_H

#include <iostream>

class Component {

public:

    Component(const std::string &name, double price, int power) : name(name), price(price), power(power) {}
    Component(const std::string &name, double price) : name(name), price(price) {}

    virtual ~Component() {

    }

    const std::string &getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    int getPower() const {
        return power;
    }

private:



    std::string name;
    double price;
    int power;

};


#endif //CONFIGURATOR_CODE_COMPONENT_H
