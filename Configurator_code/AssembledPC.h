//
// Created by aleda on 30/06/2017.
//

#ifndef CONFIGURATOR_CODE_ASSEMBLEDPC_H
#define CONFIGURATOR_CODE_ASSEMBLEDPC_H

#include "CPU.h"
#include "GraphicCard.h"
#include "Motherboard.h"
#include "PSU.h"
#include "Case.h"
#include "RAM.h"
#include "Storage.h"
#include "ComponentsDatabase.h"


class AssembledPC {

public:
    AssembledPC();

    const CPU &getCPU1() const;

    void setCPU1(const CPU &CPU1);

    const GraphicCard &getGraphicCard1() const;

    void setGraphicCard1(const GraphicCard &GraphicCard1);

    const Motherboard &getMotherboard1() const;

    void setMotherboard1(const Motherboard &Motherboard1);

    const PSU &getPSU1() const;

    void setPSU1(const PSU &PSU1);

    const Case &getCase1() const;

    void setCase1(const Case &Case1);

    const RAM &getRAM1() const;

    void setRAM1(const RAM &RAM1);

    const Storage &getStorage1() const;

    void setStorage1(const Storage &Storage1);

private:
    CPU CPU1;
    GraphicCard GraphicCard1;
    Motherboard Motherboard1;
    PSU PSU1;
    Case Case1;
    RAM RAM1;
    Storage Storage1;
};


#endif //CONFIGURATOR_CODE_ASSEMBLEDPC_H
