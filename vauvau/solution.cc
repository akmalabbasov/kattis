#include <iostream>

class Dog {
public:
  Dog(int aggressive_period, int calm_period) {
    this->aggressive_period = aggressive_period;
    this->total_period = calm_period + aggressive_period;
  }

  bool IsAggressive(int time) {
    int time_in_period = time % this->total_period;
    if (time_in_period) {
      return time_in_period <= this->aggressive_period;
    } else {
      return false;
    }
  }

private:
  int aggressive_period;
  int total_period;
};

int main() {
  Dog * dog[2];

  for (int i = 0; i < 2; ++i) {
    int c, a;
    std::cin >> a >> c;
    dog[i] = new Dog(a, c);
  }


  for (int i = 0; i < 3; ++i) {
    int t;
    std::cin >> t;
    if (dog[0]->IsAggressive(t) && dog[1]->IsAggressive(t)) {
      std::cout << "both" << std::endl;
    } else if (dog[0]->IsAggressive(t) || dog[1]->IsAggressive(t)) {
      std::cout << "one" << std::endl;
    } else {
      std::cout << "none" << std::endl;
    }
  }

  for (int i = 0; i < 2; ++i) {
    delete dog[i];
  }

  return 0;
}
