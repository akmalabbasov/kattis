#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    cout << tmp << " is " << (tmp%2 ? "odd" : "even") << endl;
  }
  return 0;
}
