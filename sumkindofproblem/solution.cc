#include <iostream>

int SumNumbersInRange(int begin, int end, int step = 1) {
  int s = 0;
  for (int i = begin; i <= end; i += step) {
    s += i;
  }
  return s;
}

int main() {
  int p;
  std::cin >> p;

  for (int i = 0; i < p; ++i) {
    int k, n;
    std::cin >> k >> n;
   
    int s1 = SumNumbersInRange(0, n);
    int s2 = SumNumbersInRange(1, n*2, 2);
    int s3 = SumNumbersInRange(0, n*2, 2);

    std::cout << k << " " << s1 << " " << s2 << " " << s3 << std::endl;
  }

  return 0;
}
