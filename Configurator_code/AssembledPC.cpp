//
// Created by aleda on 30/06/2017.
//

#include "AssembledPC.h"

const CPU &AssembledPC::getCPU1() const {
    return CPU1;
}

void AssembledPC::setCPU1(const CPU &CPU1) {
    AssembledPC::CPU1 = CPU1;
}

const GraphicCard &AssembledPC::getGraphicCard1() const {
    return GraphicCard1;
}

void AssembledPC::setGraphicCard1(const GraphicCard &GraphicCard1) {
    AssembledPC::GraphicCard1 = GraphicCard1;
}

const Motherboard &AssembledPC::getMotherboard1() const {
    return Motherboard1;
}

void AssembledPC::setMotherboard1(const Motherboard &Motherboard1) {
    AssembledPC::Motherboard1 = Motherboard1;
}

const PSU &AssembledPC::getPSU1() const {
    return PSU1;
}

void AssembledPC::setPSU1(const PSU &PSU1) {
    AssembledPC::PSU1 = PSU1;
}

const Case &AssembledPC::getCase1() const {
    return Case1;
}

void AssembledPC::setCase1(const Case &Case1) {
    AssembledPC::Case1 = Case1;
}

const RAM &AssembledPC::getRAM1() const {
    return RAM1;
}

void AssembledPC::setRAM1(const RAM &RAM1) {
    AssembledPC::RAM1 = RAM1;
}

const Storage &AssembledPC::getStorage1() const {
    return Storage1;
}

void AssembledPC::setStorage1(const Storage &Storage1) {
    AssembledPC::Storage1 = Storage1;
}
