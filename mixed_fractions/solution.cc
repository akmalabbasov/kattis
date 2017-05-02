#include <iostream>

int main() {
  int numerator, denominator;
  while (true) {
    std::cin >> numerator >> denominator;
    if (numerator + denominator == 0)
      break;

    int whole_number = numerator / denominator;
    numerator %= denominator;

    std::cout << whole_number << " " << numerator << " / " << denominator << std::endl;
  }
  return 0;
}
