#include <iostream>
#include <cmath>

int main() {
  int num_matches;
  int box_width, box_height;

  std::cin >> num_matches >> box_width >> box_height;
  int box_hypotenuse = sqrt(pow(box_width, 2) + pow(box_height, 2));

  for (int i = 0; i < num_matches; ++i) {
    int match_length;
    std::cin >> match_length;
    if (match_length <= box_hypotenuse) {
      std::cout << "DA" << std::endl;
    } else {
      std::cout << "NE" << std::endl;
    }
  }

  return 0;
}
