#include <iostream>

int main() {
  int num_test_cases;
  std::cin >> num_test_cases;

  int calories;
  for (int i = 0; i < num_test_cases; ++i) {
    std::cin >> calories;
    std::cout << (calories/400 + (calories%400 ? 1 : 0)) << std::endl;
  }
  return 0;
}
