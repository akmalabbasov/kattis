#include <iostream>

int main() {
  int own, found, cost;
  std::cin >> own >> found >> cost;
  
  int total_consumed = 0;
  int total_bottles = own + found;
  int odds = 0;
  while (total_bottles >= cost) {
    odds = total_bottles % cost;
    total_bottles /= cost;

    total_consumed += total_bottles;
    total_bottles += odds;
  }

  std::cout << total_consumed << std::endl;
}
