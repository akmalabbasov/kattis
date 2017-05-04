#include <iostream>
#include <string>
#include <sstream>

bool is_vowel(char c) {
  c = tolower(c);
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  char line[100];
  std::cin.getline(line, 100);

  std::istringstream l(line);
  std::string word;
  while (l >> word) {
  for (int i = 0; i < word.length(); ++i) {
    std::cout << word[i];

    if (is_vowel(word[i])) {
      // skip 2 letters
      i += 2;
    }
  }
  std::cout << " ";
  }
}
