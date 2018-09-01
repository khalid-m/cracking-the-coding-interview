#include "problem_01_is_unique.h"

bool chapter_01::IsUnique(const std::string &s) {
  for (int i = 0; i < s.size(); i++)
    for (int j = i + 1; j < s.size(); j++)
      if (s[i] == s[j])
      return false;
  return true;
}


int main() {
    assert(chapter_01::IsUnique("abc") == true);
    assert(chapter_01::IsUnique("aba") != false);
}
