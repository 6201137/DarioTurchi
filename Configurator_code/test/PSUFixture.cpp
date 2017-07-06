//
// Created by aleda on 05/07/2017.
//

#include"gtest/gtest.h"
#include"../PSU.h"

class GPUSuite : public ::testing::Test {

protected:
    virtual void SetUp() {

        PSU c("alimentatore",55,180);

    }

   PSU c;
};


TEST_F(GPUSuite, TestSetGet) {

    ASSERT_EQ("alimentatore", c.getName());
    ASSERT_EQ(55, c.getPrice());
    ASSERT_EQ(180,c.getPower2use());
}

