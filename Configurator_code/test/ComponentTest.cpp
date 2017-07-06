//
// Created by aleda on 06/07/2017.
//
#include <gtest/gtest.h>
#include "../Component.h"


TEST(ComponentTest, Constructor1) {
    Component A("Name",12,35);
    ASSERT_EQ("Name",A.getName());
    ASSERT_EQ(12,A.getPrice());
    ASSERT_EQ(35, A.getPower());
}
TEST(ComponentTest, Constructor2) {
    Component A2("Name",12);
    ASSERT_EQ("Name",A2.getName());
    ASSERT_EQ(12,A2.getPrice());

}
