#include <iostream>

int sum_digits(int n) {
  int s = 0;
  while (n) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

int main() {
  int l, d, x;
  std::cin >> l >> d >> x;
  
  int min = d, max = l;
  for (int i = l; i <= d; ++i) {
    if (sum_digits(i) == x) {
      if (i < min) {
        min = i;
      }

      if (i > max) {
        max = i;
      }
    }
  }

  std::cout << min << std::endl;
  std::cout << max << std::endl;
 
  return 0;
}
