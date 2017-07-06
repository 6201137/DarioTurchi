//
// Created by aleda on 06/07/2017.
//

#include<gtest/gtest.h>
#include"../Motherboard.h"
#include"../CPU.h"
TEST(MotherboardTest, ConstructorTest) {
Motherboard m1("Test1",40,"TestSocket","TestChipset",1,"Size","Ramtype");
    ASSERT_EQ("Test1",m1.getName());
    ASSERT_EQ(40,m1.getPrice());
    ASSERT_EQ("TestSocket",m1.getSocket());
    ASSERT_EQ("TestChipset",m1.getChipset());
    ASSERT_EQ(1,m1.isOc());
    ASSERT_EQ("Size",m1.getSize());
    ASSERT_EQ("Ramtype",m1.getRamtype());
}

TEST(MotherboardTest, CompatibilityTest) {

    CPU STDCPU("Standard CPU",0,0,"Standard CPU Socket",0);
    CPU AMD_FX4100("AMD Fx 4100",45,95,"AM3+",1);
    Motherboard Asus_M5a78l3_0("Asus M5A78L3.0",32,"AM3+","AMD 760G",1,"mATX","DDR3");
    Motherboard Gigabyte_GA_H270_HD3("Gigabyte H270 HD3",110,"lga1151","H270",0,"ATX","DDR4");

    ASSERT_FALSE(Asus_M5a78l3_0.CompatibilityCheck(&STDCPU));
    ASSERT_EQ(1,Asus_M5a78l3_0.CompatibilityCheck(&AMD_FX4100));

}