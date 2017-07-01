//
// Created by aleda on 29/06/2017.
//

#ifndef CONFIGURATOR_CODE_GRAPHICCARD_H
#define CONFIGURATOR_CODE_GRAPHICCARD_H

#include"Component.h"

class GraphicCard: public Component {

public:
    GraphicCard(const std::string &name, double price, int power, int memory);

private:
    int memory;
};


#endif //CONFIGURATOR_CODE_GRAPHICCARD_H
