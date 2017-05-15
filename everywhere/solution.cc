#include <iostream>
#include <set>
#include <string>

int main() {
  int num_test_cases;
  std::cin >> num_test_cases;

  for (int i = 0; i < num_test_cases; ++i) {
    int num_cities;
    std::cin >> num_cities;
    
    std::set<std::string> cities_visited;
    for (int j = 0; j < num_cities; ++j) {
      std::string city;
      std::cin >> city;
      cities_visited.insert(city);
    }
    std::cout << cities_visited.size() << std::endl;
  }
 
  return 0;
}
