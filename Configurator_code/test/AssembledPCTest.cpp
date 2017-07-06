//
// Created by aleda on 06/07/2017.
//

#include<gtest/gtest.h>
#include"../AssembledPC.h"





TEST(AssembledPCTest, ConstructorTest) {
    CPU STDCPU("Standard CPU",0,0,"Standard CPU Socket",0);
    GraphicCard STDGraphicCard("Standard GraphicCard",0,0,0);
    Motherboard STDMotherboard("Standard Motherboard",0,"Standard Motherboard socket","Standard Motherboard chipset",0, "Standard Motherboard Size","Standard Ramtype");
    RAM STDRAM("Standard RAM",0,0,"Standard Ramtype",0);
    Storage STDStorage("Standard Storage",0, 0, 0,0);
    Case Corsair_Spec_01("Corsair Spec 01",55.99, 10,"ATX");
    AssembledPC A(&STDCPU, &STDGraphicCard, &STDMotherboard, &Corsair_Spec_01, &STDRAM, &STDStorage);


    ASSERT_EQ(&STDCPU, A.getCPU1());
    ASSERT_EQ(&STDGraphicCard, A.getGPU1());
    ASSERT_EQ(&STDMotherboard, A.getMotherboard1());
    ASSERT_EQ(&STDRAM, A.getRAM());
    ASSERT_EQ(&STDStorage, A.getStorage());
    ASSERT_EQ(&Corsair_Spec_01, A.getCase1());



    /*ASSERT_EQ("Standard CPU", (A.getCPU1())->getName());
    ASSERT_EQ("Standard GraphicCard", (A.getGPU1())->getName());
    ASSERT_EQ("Standard Motherboard", (A.getMotherboard1())->getName());
    ASSERT_EQ("Standard RAM", (A.getRAM())->getName());
    ASSERT_EQ("Standard Storage", (A.getStorage())->getName());
    ASSERT_EQ("Corsair Spec 01", (A.getCase1())->getName());*/

}
