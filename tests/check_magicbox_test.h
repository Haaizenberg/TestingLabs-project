#ifndef CHECK_MAGICBOX_TEST_H
#define CHECK_MAGICBOX_TEST_H

#include <gtest/gtest.h>
#include "functions.h"

TEST(checkMagicBoxTest1, negative)
{
    ASSERT_FALSE(check_magicBox(1));
    ASSERT_FALSE(check_magicBox(-100));
    ASSERT_FALSE(check_magicBox(155));
}
TEST(checkMagicBoxTest2, positive)
{
    ASSERT_TRUE(check_magicBox(25));
    ASSERT_TRUE(check_magicBox(50));
    ASSERT_TRUE(check_magicBox(500));
    ASSERT_TRUE(check_magicBox(0));
}
TEST(checkMagicBoxTest3, negative)
{
    ASSERT_FALSE(check_magicBox(111));
    ASSERT_FALSE(check_magicBox(-355));
    ASSERT_FALSE(check_magicBox(-250));
}
TEST(checkMagicBoxTest4, positive)
{
    ASSERT_TRUE(check_magicBox(1025));
    ASSERT_TRUE(check_magicBox(200));
    ASSERT_TRUE(check_magicBox(175));
}
#endif // CHECK_MAGICBOX_TEST_H
