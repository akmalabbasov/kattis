#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
  int num_test_cases;

  for (int k = 1; ; ++k) {
    std::string line;
    std::getline(std::cin, line);
    
    num_test_cases = std::stoi(line);
    if (!num_test_cases) {
      break;
    }

    std::map<std::string, int> animals_registry;
    for (int i = 0; i < num_test_cases; ++i) {
      std::getline(std::cin, line);
 
      // The animal name is the last or the only word in the line
      int animal_name_pos = line.find_last_of(' ');
      if (animal_name_pos == std::string::npos) {
        animal_name_pos = 0;
      } else {
        animal_name_pos += 1;
      }

      // The last word in the line is the animal name
      std::string animal_name = line.substr(animal_name_pos);
      std::transform(animal_name.begin(), animal_name.end(), animal_name.begin(), ::tolower);

      // Register animal name
      animals_registry[animal_name]++;
    }

    std::cout << "List " << k << ":"  << std::endl;
    for (auto i: animals_registry) {
      std::cout << i.first << " | " << i.second << std::endl;
    }
  }
  return 0;
}
