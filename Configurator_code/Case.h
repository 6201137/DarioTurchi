//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_CASE_H
#define CONFIGURATOR_CODE_CASE_H

#include"Component.h"

class Case : public Component {
public:
    Case(const std::string &name, double price, const std::string &size);

    const std::string &getSize() const;

    bool CompatibilityCheck();
private:
    std::string size;
    int power=10; //whit a stock fan
};


#endif //CONFIGURATOR_CODE_CASE_H
