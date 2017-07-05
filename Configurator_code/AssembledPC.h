//
// Created by aleda on 05/07/2017.
//

#ifndef CONFIGURATOR_CODE_ASSEMBLEDPC_H
#define CONFIGURATOR_CODE_ASSEMBLEDPC_H

#include "CPU.h"
#include "GraphicCard.h"
#include "Motherboard.h"
#include "Case.h"
#include "RAM.h"
#include "Storage.h"


class AssembledPC {
public:
    AssembledPC(CPU *CPU1, GraphicCard *GPU1, Motherboard *Motherboard1, Case *Case1, RAM *RAM1, Storage *Storage1);

    virtual ~AssembledPC();

    CPU *getCPU1() const;

    void setCPU1(CPU *CPU1);

    GraphicCard *getGPU1() const;

    void setGPU1(GraphicCard *GPU1);

    Motherboard *getMotherboard1() const;

    void setMotherboard1(Motherboard *Motherboard1);


    Case *getCase1() const;

    void setCase1(Case *Case1);

    RAM *getRAM() const;

    void setRAM(RAM *RAM);

    Storage *getStorage() const;

    void setStorage(Storage *Storage);

private:
    CPU* CPU1;
    GraphicCard* GPU1;
    Motherboard* Motherboard1;
    Case* Case1;
    RAM* RAM1;
    Storage* Storage1;

};


#endif //CONFIGURATOR_CODE_ASSEMBLEDPC_H
