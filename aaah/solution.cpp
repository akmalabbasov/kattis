#include <iostream>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  cout << (s1.length() >= s2.length() ? "go" : "no") << endl;
  return 0;
}
