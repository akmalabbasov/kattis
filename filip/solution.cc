#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string a, b;
  std::cin >> a >> b;

  std::reverse(a.begin(), a.end());
  std::reverse(b.begin(), b.end());

  std::cout << (a > b ? a : b) << std::endl;
  return 0;
}
