//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_CPU_H
#define CONFIGURATOR_CODE_CPU_H

#include"Component.h"

class CPU : public Component {

public:

    CPU(const std::string &name, float price, int power, const std::string &socket, bool oc) : Component(name, price, power), socket(socket), oc(oc) {}

    virtual ~CPU() {

    }

    const std::string &getSocket() const {
        return socket;
    }

    bool isOc() const {
        return oc;
    }

private:
    std::string socket;
    bool oc;


};


#endif //CONFIGURATOR_CODE_CPU_H
