//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_PSU_H
#define CONFIGURATOR_CODE_PSU_H

#include "Component.h"



class PSU : public Component {
public:
    PSU(const std::string &name, float price, int power);

    virtual ~PSU();

};


#endif //CONFIGURATOR_CODE_PSU_H
