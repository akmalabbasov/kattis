#include <iostream>

int main() {
  int num_sweet_jars, num_sour_jars;
  while (true) {
    std::cin >> num_sweet_jars >> num_sour_jars;
    if (num_sweet_jars == 0 && num_sour_jars == 0)
      break;

    if (num_sweet_jars + num_sour_jars == 13)
      std::cout << "Never speak again." << std::endl;
    else if (num_sweet_jars < num_sour_jars)
      std::cout << "Left beehind." << std::endl;
    else if (num_sweet_jars > num_sour_jars)
      std::cout << "To the convention." << std::endl;
    else if (num_sweet_jars == num_sour_jars)
      std::cout << "Undecided." << std::endl;
  }
  return 0;
}
