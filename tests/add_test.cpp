/* Copyright (c) 2018, Yu Zhang, Intelligent Vehicle Research Center(IVRC), 
 * Beijing Institute of Technology.
 * All rights reserved.
 *        Files: add_test.cpp
 *   Created on: 07, 09, 2018 
 *       Author: Yu Zhang
 *        Email: yu.zhang.bit@gmail.com
 */

#include "gtest/gtest.h"
#include <iostream>

TEST(AddTest, TwoAndTwo) {
    EXPECT_EQ(4, 4);

}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}