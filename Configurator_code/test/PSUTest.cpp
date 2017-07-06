//
// Created by aleda on 05/07/2017.
//
#include"../PSU.h"
#include"gtest/gtest.h"
TEST(PSU, DefaultConstructor) {
    PSU c("alimentatore",30,150);
    ASSERT_EQ("alimentatore", c.getName());
    ASSERT_EQ(30, c.getPrice());
    ASSERT_EQ(150,c.getPower2use());
}