#include <iostream>
#include <stdint.h>
#include <cmath>
#include <iomanip>

int main() {
  uint64_t pastures_area;
  std::cin >> pastures_area;

  std::cout << std::setprecision(10) << std::sqrt(pastures_area) * 4 << std::endl;
  return 0;
}
