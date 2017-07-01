//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_MOTHERBOARD_H
#define CONFIGURATOR_CODE_MOTHERBOARD_H

#include"Component.h"

class Motherboard: public Component {

public:
    Motherboard(const std::string &name, double price, const std::string &socket, const std::string &chipset,
                bool oc, const std::string &size, const std::string &ramtype);

    const std::string &getSocket() const;

    const std::string &getChipset() const;

    bool isOc() const;

    const std::string &getSize() const;

    const std::string &getRamtype() const;

    bool CompatibilityCheck();


private:
    std::string socket;
    std::string chipset;
    bool oc;
    std::string size;
    std::string ramtype;
    int power=70;

};


#endif //CONFIGURATOR_CODE_MOTHERBOARD_H
