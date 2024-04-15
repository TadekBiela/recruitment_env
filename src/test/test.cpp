#include <app.h>
#include <gtest/gtest.h>

class AppTests : public testing::Test
{
};

TEST_F(AppTests, A_A_A)
{
    App app;
    EXPECT_TRUE(app.foo());
}
