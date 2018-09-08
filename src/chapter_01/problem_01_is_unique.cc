#include "problem_01_is_unique.h"

namespace {

  // The solution without additional space
  // Time complexity O(n log n), Space complexity O(1)
bool IsUniqueWithSort(const std::string &str) {
  std::string temp_str(str);
  std::sort(temp_str.begin(), temp_str.end());
  for (int i = 0; i < (int)temp_str.length(); i++)
    if (temp_str[i] == temp_str[i + 1]) return false;
  return true;
}

  // Fastest Solution
  // Time complexity O(n), Space complexity O(n)
bool IsUniqueFast(const std::string &s) {
  std::unordered_map<char, int> frequency;
  for (const auto &character : s) {
    if (frequency.count(character) > 0) return false;
    frequency[character]++;
  }
  return true;
}

}  // namespace

namespace chapter_01 {

bool IsUnique(const std::string &str) {
  bool is_unique = IsUniqueFast(str);
  assert(is_unique == IsUniqueWithSort(str));
  return is_unique;
}

}  // namespace chapter_01
