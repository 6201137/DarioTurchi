//
// Created by aleda on 05/07/2017.
//

#ifndef CONFIGURATOR_CODE_ASSEMBLEDPCDECORATOR_H
#define CONFIGURATOR_CODE_ASSEMBLEDPCDECORATOR_H

#include"AssembledPC.h"
#include "PSU.h"


class AssembledPCDecorator {
public:

    explicit AssembledPCDecorator(AssembledPC* assembledPC) : _assembledPC (assembledPC){};
    float totalCost();
    int totalWatt();
    PSU *getPSU1() const;
    bool compatibilityCheck();
    void setPSU1(PSU *PSU1);

    AssembledPC *get_assembledPC() const;

    void set_assembledPC(AssembledPC *_assembledPC);

private:
    AssembledPC* _assembledPC;
    PSU* PSU1;
};


#endif //CONFIGURATOR_CODE_ASSEMBLEDPCDECORATOR_H
