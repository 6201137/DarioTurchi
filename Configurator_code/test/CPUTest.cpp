//
// Created by aleda on 06/07/2017.
//

#include <gtest/gtest.h>
#include"../CPU.h"


TEST(CPUTest, ConstructorTest) {
    CPU CPU1("Test1",100,90,"Test2",1);
    ASSERT_EQ("Test1",CPU1.getName());
    ASSERT_EQ(100,CPU1.getPrice());
    ASSERT_EQ(90,CPU1.getPower());
    ASSERT_EQ("Test2",CPU1.getSocket());
    ASSERT_EQ(1,CPU1.isOc());


}
