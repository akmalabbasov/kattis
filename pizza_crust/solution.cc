#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  float radius, crust;
  std::cin >> radius >> crust;

  float cheese_area = (std::pow(radius-crust, 2) / std::pow(radius, 2)) * 100;
  printf("%.6f\n", cheese_area);
  return 0;
}
