#include <iostream>

void PrintArray(int * a) {
  for (int i = 0; i < 5; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
}

void SwapValues(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a[5];
  
  // Read input values
  for (int i = 0; i < 5; ++i) {
    std::cin >> a[i];
  }

  int swaps;
  do {
    swaps = 0;
    for (int i = 0; i < 5 - 1; ++i) {
      if (a[i] > a[i+1]) {
        SwapValues(a[i], a[i+1]);
        ++swaps;

        PrintArray(a);
      }
    }
  } while (swaps);

  return 0;
}
