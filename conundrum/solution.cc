#include <iostream>
#include <string>

int main() {
  std::string ciphertext;
  std::cin >> ciphertext;

  int num_days = 0;
  for (int i = 0; i < ciphertext.length(); ++i) {
    int day_index = i % 3;
    if ((day_index == 0 && ciphertext[i] != 'P') ||
        (day_index == 1 && ciphertext[i] != 'E') ||
        (day_index == 2 && ciphertext[i] != 'R')) {
      num_days++;
    }
  }
  std::cout << num_days << std::endl;
}
