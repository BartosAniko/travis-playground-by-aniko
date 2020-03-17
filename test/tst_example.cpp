#include "gtest/gtest.h"

#include "example.h"

TEST(Dummy, foobar)
{
    EXPECT_EQ(1, 1);
}

TEST(AddTest, Add_1_3)
{
	int a = example::add(1, 3);
	EXPECT_EQ(4, a);
}

TEST(AddTest, Add_2_5)
{
	int a = example::add(2, 5);
	EXPECT_EQ(7, a);
}

TEST(MultTest, Mult_1_3)
{
    int a = example::mult(1, 3);
    EXPECT_EQ(3, a);
}

TEST(MultTest, Add_2_5)
{
    int a = example::mult(2, 5);
    EXPECT_EQ(10, a);
}

TEST(NegTest, Neg_3)
{
    int a = example::neg(3);
    EXPECT_EQ(-3, a);
}

TEST(NegTest, Neg_minus3)
{
    int a = example::neg(-3);
    EXPECT_EQ(3, a);
}

TEST(divTest, Div_3_1)
{
    double a = example::div(3, 1);
    EXPECT_EQ(3, a);
}

TEST(divTest, Div_5_10)
{
    double a = example::div(5, 10);
    EXPECT_EQ(0.5, a);
}


int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

