#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
  long long int a, b;
  std::string line;
  while ( std::getline( std::cin, line ) ) {
    if (line.empty())
      break;

    sscanf(line.c_str(), "%lld %lld", &a, &b);
    cout << abs(a-b) << endl;
  }

  return 0;
}
