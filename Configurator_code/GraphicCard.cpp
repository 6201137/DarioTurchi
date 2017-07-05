//
// Created by aleda on 29/06/2017.
//

#include "GraphicCard.h"

GraphicCard::GraphicCard(const std::string &name, float price, int power, int memory) : Component(name, price, power),
                                                                                         memory(memory) {}

GraphicCard::~GraphicCard() {

}
