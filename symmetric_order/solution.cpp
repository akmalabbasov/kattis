#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  for (int k = 1; ; k++) {
    cin >> n;
    if (n == 0)
      break;

    string a[n];
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    cout << "SET " << k << endl;
    for (int i = 0; i < n; i += 2)
      cout << a[i] << endl;

    for (int i = n - 1 - n%2; i > 0; i -= 2)
      cout << a[i] << endl;
  }

  return 0;
}
