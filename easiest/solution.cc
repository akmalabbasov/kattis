#include <iostream>

int SumDigits(int n) {
  int summ = 0;
  do {
    int remainder = n % 10;
    summ += remainder;
    n /= 10;
  } while (n);

  return summ;
}

int main() {
  int n;

  while (true) {
    std::cin >> n;
    if (!n) {
      break;
    }

    int digits_sum = SumDigits(n);
    int i = 11;
    for (; ; ++i) {
      if (digits_sum == SumDigits(n*i)) {
        break;
      }
    }
    std::cout << i << std::endl;
  }
  return 0;
}
