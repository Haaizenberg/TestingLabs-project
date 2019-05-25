#ifndef CHECK_GAMEOVER_TEST_H
#define CHECK_GAMEOVER_TEST_H

#include <gtest/gtest.h>
#include "functions.h"

TEST(checkGameoverTest1, negative)
{
    ASSERT_FALSE(check_gameover(390, 1));
    ASSERT_FALSE(check_gameover(490, 1));
    ASSERT_FALSE(check_gameover(650, -1));
}
TEST(checkGameoverTest2, positive)
{
    ASSERT_TRUE(check_gameover(501, 1));
    ASSERT_TRUE(check_gameover(600, 1));
    ASSERT_TRUE(check_gameover(888, 1));
}
TEST(checkGameoverTest3, positive)
{
    ASSERT_TRUE(check_gameover(491, 0));
    ASSERT_TRUE(check_gameover(555, 0));
    ASSERT_TRUE(check_gameover(676, 0));
}
TEST(checkGameoverTest4, negative)
{
    ASSERT_FALSE(check_gameover(-490, 0));
    ASSERT_FALSE(check_gameover(-333, 0));
    ASSERT_FALSE(check_gameover(0, 0));
}

#endif // CHECK_GAMEOVER_TEST_H
