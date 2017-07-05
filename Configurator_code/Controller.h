//
// Created by aleda on 05/07/2017.
//

#ifndef CONFIGURATOR_CODE_CONTROLLER_H
#define CONFIGURATOR_CODE_CONTROLLER_H

#include<iostream>
#include "AssembledPCDecorator.h"
#include "AssembledPC.h"

class Controller {
public:
    void setGraphicCard( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void setCPU(  AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void setPSU( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void setMotherboard( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void setRAM(  AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void setStorage( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void setCase( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator);
    void test (AssembledPCDecorator *assembledPCDecorator, AssembledPC *assembledPC );


    bool isGraphicCardLight() const;

    void setGraphicCardLight(bool GraphicCardLight);

    bool isPSULight() const;

    void setPSULight(bool PSULight);

    bool isCPULight() const;

    void setCPULight(bool CPULight);

    bool isMotherboardLight() const;

    void setMotherboardLight(bool MotherboardLight);

    bool isCaseLight() const;

    void setCaseLight(bool CaseLight);

    bool isRAMLight() const;

    void setRAMLight(bool RAMLight);

    bool isStorageLight() const;

    void setStorageLight(bool StorageLight);

protected:
    bool GraphicCardLight;
    bool PSULight;
    bool CPULight;
    bool MotherboardLight;
    bool CaseLight;
    bool RAMLight;
    bool StorageLight;
};




#endif //CONFIGURATOR_CODE_CONTROLLER_H
