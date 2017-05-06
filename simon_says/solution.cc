#include <iostream>
#include <string>

bool StartsWith(const std::string& prefix, const std::string& str) {
  if (str.substr(0, prefix.length()) == prefix)
    return true;
  return false;
}

int main() {
  std::string prefix = "Simon says ";
  std::string line;

  // Read number of lines  
  std::getline(std::cin, line);
  int n = std::stoi(line);
  
  // Read and process commands
  for (int i = 0; i < n; ++i) {
    std::getline(std::cin, line);

    if (StartsWith(prefix, line)) {
      std::cout << line.substr(prefix.length()) << std::endl; 
    }
  }

  return 0;
}
