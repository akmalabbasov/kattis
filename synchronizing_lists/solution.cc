#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

void ReadNumbers(const int n, std::vector<int>& v) {
  for (int i = 0; i < n; ++i) {
    int tmp;
    std::cin >> tmp;
    v.push_back(tmp);
  }
}

int main() {
  int n;
  while (true) {
    std::cin >> n;
    if (n == 0)
      break;

    std::vector<int> first;
    ReadNumbers(n, first);

    std::vector<int> second;
    ReadNumbers(n, second);

    std::vector<int> fixed = first;

    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());

    std::unordered_map<int, int> m;
    for (int i = 0; i < n; ++i) {
      m.insert(std::make_pair(first[i], second[i]));
    }

    for (int i = 0; i < n; ++i) {
      std::cout << m[fixed[i]] << std::endl;
    }
    std::cout << std::endl;
  }
  
  return 0;
}
