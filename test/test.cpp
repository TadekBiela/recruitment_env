#include <app.h>
#include <gtest/gtest.h>

class AppTests : public testing::Test
{
};

TEST_F(AppTests, A_A_A)
{
    EXPECT_EQ(1, 1);
}
