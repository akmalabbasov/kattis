#include <iostream>
#include <string>

using namespace std;

int main() {
  string line;
  cin >> line;

  char prev = '-';  
  for (int i = 0; i < line.length(); ++i) {
    if (prev != line[i])
      cout << line[i];
    
    prev = line[i];
  }
  cout << endl;

  return 0;
}
