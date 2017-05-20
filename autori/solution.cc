#include <iostream>
#include <string>

int main() {
  std::string author_names;
  std::cin >> author_names;

  std :: cout << author_names[0];
  for (int i = 0; i < author_names.length(); ++i) {
    if (author_names[i] == '-') {
      std::cout << author_names[++i];
    }
  }
  std::cout << std::endl;

  return 0;
}
