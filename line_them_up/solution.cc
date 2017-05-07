#include <iostream>
#include <string>

enum NamesOrder {
  kNeither,
  kIncreasing,
  kDecreasing,
};

std::string OrderNameToString(const NamesOrder order) {
  switch (order) {
    case kNeither:
      return "NEITHER";

    case kIncreasing:
      return "INCREASING";

    case kDecreasing:
      return "DECREASING";
  }
}

bool OrderIncreasing(const std::string& first, const std::string& second) {
  return first < second;
}

bool OrderDecreasing(const std::string& first, const std::string& second) {
  return first > second;
}

int main() {
  NamesOrder curr_order = kNeither;
  
  int num_names;
  std::cin >> num_names;

  std::string names[num_names];
  for (int i = 0; i < num_names; ++i) {
    std::cin >> names[i];
  }

  std::string prev = names[0];
  for (int i = 1; i < num_names; ++i) {
    std::string curr = names[i];
    
    // Order isn't set yet
    if (curr_order == kNeither) {
      if (OrderIncreasing(prev, curr)) {
        curr_order = kIncreasing;
      } else if (OrderDecreasing(prev, curr)) {
        curr_order = kDecreasing;
      }

    } else {
      // Make sure that input is in valid order
      if ((curr_order == kIncreasing && OrderDecreasing(prev, curr)) ||
          (curr_order == kDecreasing && OrderIncreasing(prev, curr))) {
        curr_order = kNeither;
        break;
      }
    }

    prev = curr;
  }

  std::cout << OrderNameToString(curr_order) << std::endl;
  
  return 0;
}
