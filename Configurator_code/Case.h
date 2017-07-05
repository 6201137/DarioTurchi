//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_CASE_H
#define CONFIGURATOR_CODE_CASE_H


#include"Component.h"

class Case : public Component {
public:
    Case(const std::string &name, float price, int power, const std::string &size);

    virtual ~Case();

    const std::string &getSize() const;

    bool CompatibilityCheck(Motherboard* motherboard);
private:
    std::string size;
};


#endif //CONFIGURATOR_CODE_CASE_H
