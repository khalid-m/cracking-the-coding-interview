#include "problem_01_is_unique.h"

#include "gtest/gtest.h"

TEST(IsUnique, AllTest) {
  EXPECT_EQ(chapter_01::IsUnique("abc"), true);
  EXPECT_EQ(chapter_01::IsUnique("aba"), false);
  EXPECT_EQ(chapter_01::IsUnique("aba"), true);
}
