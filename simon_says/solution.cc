#include <iostream>
#include <string>

int main() {
  std::string msg_prefix = "Simon says ";
  std::string line;

  // Read number of lines  
  std::getline(std::cin, line);
  int n = std::stoi(line);
  
  // Read and process commands
  for (int i = 0; i < n; ++i) {
    std::getline(std::cin, line);

    int p = line.find(msg_prefix);
    if (p != std::string::npos) {
      std::cout << line.substr(p+msg_prefix.length()) << std::endl; 
    }
  }

  return 0;
}
