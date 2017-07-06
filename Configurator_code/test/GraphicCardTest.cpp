//
// Created by aleda on 06/07/2017.
//
#include <gtest/gtest.h>
#include "../GraphicCard.h"


TEST(GraphicCard, DefaultConstructor) {
GraphicCard G("Default",137.9,120,4);
ASSERT_EQ("Default", G.getName());
ASSERT_EQ(137.9, G.getPrice());
ASSERT_EQ(120, G.getPower());
}

