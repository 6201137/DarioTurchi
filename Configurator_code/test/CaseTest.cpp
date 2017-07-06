//
// Created by aleda on 06/07/2017.
//

#include <gtest/gtest.h>
#include"../Case.h"
#include"../Motherboard.h"

TEST(CaseTest, ConstructorTest) {
    Case Case1("Test1",40,10,"Test2");
    ASSERT_EQ("Test1",Case1.getName());
    ASSERT_EQ(40,Case1.getPrice());
    ASSERT_EQ(10,Case1.getPower());
    ASSERT_EQ("Test2",Case1.getSize());
}

TEST(CaseTest,CompatibilityTest){
    Case Thermaltake_Core_V1("Thermaltake Core V1",43.99,10,"mini-ITX");
    Motherboard Asus_M5a78l3_0("Asus M5A78L3.0",32,"AM3+","AMD 760G",1,"mATX","DDR3");
    Motherboard Gigabyte_GA_H270_HD3("Gigabyte H270 HD3",110,"lga1151","H270",0,"ATX","DDR4");
    Case Corsair_Carbide_Air_540("Corsair Carbide Air 540", 149.01, 10,"ATX");
    ASSERT_EQ(1,Corsair_Carbide_Air_540.CompatibilityCheck(&Asus_M5a78l3_0));
    ASSERT_FALSE(Thermaltake_Core_V1.CompatibilityCheck(&Gigabyte_GA_H270_HD3));

}
