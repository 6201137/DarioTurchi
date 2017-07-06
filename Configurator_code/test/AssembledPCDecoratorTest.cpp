//
// Created by aleda on 06/07/2017.
//

#include<gtest/gtest.h>
#include"../AssembledPC.h"
#include "../AssembledPCDecorator.h"

TEST(AssembledPCDecoratorTest, constructorTest) {
    CPU STDCPU("Standard CPU",0,0,"Standard CPU Socket",0);
    GraphicCard STDGraphicCard("Standard GraphicCard",0,0,0);
    Motherboard STDMotherboard("Standard Motherboard",0,"Standard Motherboard socket","Standard Motherboard chipset",0, "Standard Motherboard Size","Standard Ramtype");
    RAM STDRAM("Standard RAM",0,0,"Standard Ramtype",0);
    Storage STDStorage("Standard Storage",0, 0, 0,0);
    Case Corsair_Spec_01("Corsair Spec 01",55.99, 10,"ATX");
    AssembledPC A(&STDCPU, &STDGraphicCard, &STDMotherboard, &Corsair_Spec_01, &STDRAM, &STDStorage);
    AssembledPCDecorator AD(&A);
    PSU STDPSU("Standard PSU",0,0);
    AD.setPSU1(&STDPSU);

    ASSERT_EQ(&A, AD.get_assembledPC());

    ASSERT_EQ(&STDPSU, AD.getPSU1());

}

TEST(AssembledPCDecoratorTest, Powertest) {
    CPU STDCPU("Standard CPU",0,0,"Standard CPU Socket",0);
    GraphicCard STDGraphicCard("Standard GraphicCard",0,0,0);
    Motherboard STDMotherboard("Standard Motherboard",0,"Standard Motherboard socket","Standard Motherboard chipset",0, "Standard Motherboard Size","Standard Ramtype");
    RAM STDRAM("Standard RAM",0,0,"Standard Ramtype",0);
    Storage STDStorage("Standard Storage",0, 0, 0,0);
    Case Corsair_Spec_01("Corsair Spec 01",55, 10,"ATX");
    AssembledPC A(&STDCPU, &STDGraphicCard, &STDMotherboard, &Corsair_Spec_01, &STDRAM, &STDStorage);
    AssembledPCDecorator AD(&A);
    PSU STDPSU("Standard PSU",0,0);
    AD.setPSU1(&STDPSU);

    ASSERT_EQ(10, AD.totalWatt());
    ASSERT_EQ(55, AD.totalCost());
    ASSERT_FALSE(AD.compatibilityCheck());

    PSU PSU2("PSU",0,50);
    AD.setPSU1(&PSU2);
    ASSERT_EQ(1, AD.compatibilityCheck());

}
