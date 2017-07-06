//
// Created by aleda on 06/07/2017.
//


#include <gtest/gtest.h>
#include"../PSU.h"


TEST(PSUTest, ConstructorTest) {
    PSU PSU1("Test1",52,550);
    ASSERT_EQ("Test1",PSU1.getName());
    ASSERT_EQ(52,PSU1.getPrice());
    ASSERT_EQ(550,PSU1.getPower());
}
