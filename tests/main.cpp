#include "check_collision_test.h"
#include "check_gameover_test.h"
#include "check_magicbox_test.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
