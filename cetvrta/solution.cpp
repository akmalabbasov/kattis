#include <iostream>

using namespace std;

int main() {
  int x[1000] = {0};
  int y[1000] = {0};

  int a, b;
  for (int i = 0; i < 3; ++i) {
    cin >> a >> b;
    x[a-1]++;
    y[b-1]++;
  }

  for (int i = 0; i < 1000; ++i) {
    if (x[i] == 1)
      a = i + 1;

    if (y[i] == 1)
      b = i + 1;
  }

  cout << a << " " << b << endl;
  return 0;
}
