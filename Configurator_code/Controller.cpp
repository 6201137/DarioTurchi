//
// Created by aleda on 05/07/2017.
//

#include "Controller.h"


void Controller :: setCPU( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator ){
    CPULight=1;
    this->test( assembledPCDecorator,assembledPC );


};
void Controller :: setPSU( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator){
    PSULight=1;
    this->test( assembledPCDecorator,assembledPC );

}


void Controller :: setMotherboard( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator){
    MotherboardLight=1;
    this->test(assembledPCDecorator, assembledPC);
}

void Controller :: setRAM( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator){
    RAMLight= 1;
    this->test( assembledPCDecorator,assembledPC );
}

void Controller :: setGraphicCard( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator){
    GraphicCardLight= 1;
    this->test( assembledPCDecorator,assembledPC );

}

void Controller :: setStorage( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator){
    StorageLight= 1;
    this->test( assembledPCDecorator,assembledPC );
}

void Controller :: setCase( AssembledPC* assembledPC, AssembledPCDecorator* assembledPCDecorator){
    CaseLight= 1;
    this->test( assembledPCDecorator,assembledPC );
}

void Controller::test( AssembledPCDecorator *assembledPCDecorator, AssembledPC *assembledPC ){


    if(assembledPC->getMotherboard1()->CompatibilityCheck(assembledPC->getCPU1()))
        this->MotherboardLight = 1;
    else
        this->MotherboardLight = 0;

    if (assembledPC->getRAM()->CompatibilityCheck(assembledPC->getMotherboard1()))
        this->RAMLight = 1;
    else
        this->RAMLight = 0;

    if (assembledPC->getCase1()->CompatibilityCheck(assembledPC->getMotherboard1()))
        this->CaseLight=1;
    else
        this->CaseLight = 0;

    if (assembledPCDecorator->compatibilityCheck())
        this->PSULight= 1;
    else
        this ->PSULight = 0;



}

bool Controller::isGraphicCardLight() const {
    return GraphicCardLight;
}

void Controller::setGraphicCardLight(bool GraphicCardLight) {
    Controller::GraphicCardLight = GraphicCardLight;
}

bool Controller::isPSULight() const {
    return PSULight;
}

void Controller::setPSULight(bool PSULight) {
    Controller::PSULight = PSULight;
}

bool Controller::isCPULight() const {
    return CPULight;
}

void Controller::setCPULight(bool CPULight) {
    Controller::CPULight = CPULight;
}

bool Controller::isMotherboardLight() const {
    return MotherboardLight;
}

void Controller::setMotherboardLight(bool MotherboardLight) {
    Controller::MotherboardLight = MotherboardLight;
}

bool Controller::isCaseLight() const {
    return CaseLight;
}

void Controller::setCaseLight(bool CaseLight) {
    Controller::CaseLight = CaseLight;
}

bool Controller::isRAMLight() const {
    return RAMLight;
}

void Controller::setRAMLight(bool RAMLight) {
    Controller::RAMLight = RAMLight;
}

bool Controller::isStorageLight() const {
    return StorageLight;
}

void Controller::setStorageLight(bool StorageLight) {
    Controller::StorageLight = StorageLight;
}
