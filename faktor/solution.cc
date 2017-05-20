#include <iostream>
#include <cmath>

int main() {
  int num_articles, impact_factor;
  std::cin >> num_articles >> impact_factor;

  if (num_articles == 1) {
    std::cout << impact_factor << std::endl;
    return 0;
  }

  std::cout << std::ceil(num_articles * (impact_factor - 0.99)) << std::endl;
  return 0;
}
