#include "problem_01_is_unique.h"

#include "gtest/gtest.h"

#include <string>

TEST(IsUnique, AllTest) {
  EXPECT_EQ(chapter_01::IsUnique("abc"), true);
  EXPECT_EQ(chapter_01::IsUnique("aba"), false);
  EXPECT_EQ(chapter_01::IsUnique(""), true);
  EXPECT_EQ(chapter_01::IsUnique("A"), true);

  const int kBigSize = 100000;
  std::string big_random_str;
  big_random_str.reserve(kBigSize);
  for (int i = 0; i < kBigSize; i++)
    big_random_str += rand();
  std::string not_unique_str = big_random_str + big_random_str;
  EXPECT_EQ(chapter_01::IsUnique(not_unique_str), false);
}
