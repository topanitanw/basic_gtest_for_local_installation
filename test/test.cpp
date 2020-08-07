#include <gtest/gtest.h>

TEST(MathTest, TwoPlusTwoEqualsFour) {
  EXPECT_EQ(2 + 2, 4);
}

// main is defined in the static library, so you do not need it.
// I leave it here for future reference.
// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest( &argc, argv );
//   return RUN_ALL_TESTS();
// }
