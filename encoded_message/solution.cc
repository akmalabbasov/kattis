#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::string line;
  std::getline(std::cin, line);

  int num_test_cases = std::stoi(line);
  for (int i = 0; i < num_test_cases; ++i) {
    std::getline(std::cin, line);
    int sqrt_line_length = std::sqrt(line.length());
 
    for (int j = sqrt_line_length-1; j >= 0; --j) {
      for (int k = 0; k < sqrt_line_length; k++) {
        std::cout << line[j + sqrt_line_length*k];
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
