#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<char, std::string> alphabet = {
    {'a', "@"}, {'b', "8"}, {'c', "("}, {'d', "|)"}, {'e', "3"}, {'f', "#"}, {'g', "6"},
    {'h', "[-]"}, {'i', "|"}, {'j', "_|"}, {'k', "|<"}, {'l', "1"}, {'m', "[]\\/[]"}, {'n', "[]\\[]"},
    {'o', "0"}, {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"}, {'s', "$"}, {'t', "']['"}, {'u', "|_|"},
    {'v', "\\/"}, {'w', "\\/\\/"}, {'x', "}{"}, {'y', "`/"}, {'z', "2"}
  };

  char c;
  do {
    c = getchar();
    if (isalpha(c)) {
      std::cout << alphabet[tolower(c)];
    } else {
      std::cout << c;
    }
  } while (c != '\n');

  return 0;
}
