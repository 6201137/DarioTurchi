//
// Created by aleda on 06/07/2017.
//
#include<gtest/gtest.h>
#include"../RAM.h"
#include"../Motherboard.h"
TEST(RAMTest, ConstructorTest) {
    RAM r1("ram",60,10,"ramtype",8);
    ASSERT_EQ("ram", r1.getName());
    ASSERT_EQ(60,r1.getPrice());
    ASSERT_EQ(10,r1.getPower());
    ASSERT_EQ("ramtype",r1.getRamtype());
    ASSERT_EQ(8,r1.getDimension());
}


TEST(RAMTest, CompatibilityTest){
    Motherboard Asus_M5a78l3_0("Asus M5A78L3.0",32,"AM3+","AMD 760G",1,"mATX","DDR3");
    Motherboard Gigabyte_GA_H270_HD3("Gigabyte H270 HD3",110,"lga1151","H270",0,"ATX","DDR4");
    RAM Kingston_HyperX_Fury_2x4("Kingston HyperX Fury 2x4 GB",67, 10, "DDR3",8);
    RAM Kingston_HyperX_Fury_HX421C14FB2("Kingston_HyperX_Fury_HX421C14FB2",63, 10, "DDR4",8);

    ASSERT_FALSE(Kingston_HyperX_Fury_2x4.CompatibilityCheck(&Gigabyte_GA_H270_HD3));
    ASSERT_EQ(1,Kingston_HyperX_Fury_2x4.CompatibilityCheck(&Asus_M5a78l3_0));

}

