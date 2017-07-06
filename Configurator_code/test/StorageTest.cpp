//
// Created by aleda on 06/07/2017.
//

#include <gtest/gtest.h>
#include"../Storage.h"
#include"../Motherboard.h"

TEST(StorageTest, ConstructorTest) {
    Storage s1("Test1",40,10,500,0);
    ASSERT_EQ("Test1",s1.getName());
    ASSERT_EQ(40,s1.getPrice());
    ASSERT_EQ(10,s1.getPower());
    ASSERT_EQ(500,s1.getCapacity());
    ASSERT_FALSE(s1.isSsd());
}