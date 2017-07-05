//
// Created by aleda on 05/07/2017.
//

#include "AssembledPC.h"

CPU *AssembledPC::getCPU1() const {
    return CPU1;
}

void AssembledPC::setCPU1(CPU *CPU1) {
    AssembledPC::CPU1 = CPU1;
}

GraphicCard *AssembledPC::getGPU1() const {
    return GPU1;
}

void AssembledPC::setGPU1(GraphicCard *GPU1) {
    AssembledPC::GPU1 = GPU1;
}

Motherboard *AssembledPC::getMotherboard1() const {
    return Motherboard1;
}

void AssembledPC::setMotherboard1(Motherboard *Motherboard1) {
    AssembledPC::Motherboard1 = Motherboard1;
}

PSU *AssembledPC::getPSU1() const {
    return PSU1;
}

void AssembledPC::setPSU1(PSU *PSU1) {
    AssembledPC::PSU1 = PSU1;
}

Case *AssembledPC::getCase1() const {
    return Case1;
}

void AssembledPC::setCase1(Case *Case1) {
    AssembledPC::Case1 = Case1;
}

RAM *AssembledPC::getRAM() const {
    return RAM1;
}

void AssembledPC::setRAM(RAM * RAM1) {
    AssembledPC::RAM1 = RAM1;
}

Storage *AssembledPC::getStorage() const {
    return Storage1;
}

void AssembledPC::setStorage(Storage * Storage1) {
    AssembledPC::Storage1 = Storage1;
}

AssembledPC::AssembledPC(CPU *CPU1, GraphicCard *GPU1, Motherboard *Motherboard1, PSU *PSU1, Case *Case1, RAM *RAM1,
                         Storage *Storage1) : CPU1(CPU1), GPU1(GPU1), Motherboard1(Motherboard1), PSU1(PSU1),
                                              Case1(Case1), RAM1(RAM1), Storage1(Storage1) {}
