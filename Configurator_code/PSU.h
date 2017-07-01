//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_PSU_H
#define CONFIGURATOR_CODE_PSU_H

#include "Component.h"

class PSU : public Component {
public:
    PSU(const std::string &name, double price, int power2use);

    int getPower2use() const;
    bool CompatibilityCheck();

private:
    int power2use;
    int power=0;
};


#endif //CONFIGURATOR_CODE_PSU_H
