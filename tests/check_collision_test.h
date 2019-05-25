#ifndef CHECK_COLLISION_TEST_H
#define CHECK_COLLISION_TEST_H

#include <gtest/gtest.h>
#include "functions.h"

TEST(checkCollisionTest1, negative)
{
    ASSERT_FALSE(check_collision(150, 88, 2, 2));
    ASSERT_FALSE(check_collision(488, 88, 475, 100));
    ASSERT_FALSE(check_collision(500, 255, 450, 155));
    ASSERT_FALSE(check_collision(500, 255, 509, 346));
}
TEST(checkCollisionTest2, negative)
{
    ASSERT_FALSE(check_collision(0, 0, 80, 0));
    ASSERT_FALSE(check_collision(0, 100, 80, 200));
    ASSERT_FALSE(check_collision(-120, 266, 157, 367));
}

TEST(checkCollisionTest3, positive)
{
    ASSERT_TRUE(check_collision(10, 300, 3, 300));
    ASSERT_TRUE(check_collision(50, 50, 41, 51));
    ASSERT_TRUE(check_collision(500, 255, 509, 300));
}
TEST(checkCollisionTest4, positive)
{
    ASSERT_TRUE(check_collision(0, 0, 0, 0));
    ASSERT_TRUE(check_collision(178, 266, 188, 355));
    ASSERT_TRUE(check_collision(666, 343, 711, 432));
}
#endif // CHECK_COLLISION_TEST_H
