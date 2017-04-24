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
    for (int i = 0, j = 0; i < n; ++i) {
      if (i%2) {
        cin >> a[n-j];
        
      } else {
        cin >> a[j++];
      }
    }

    cout << "SET " << k << endl;
    for (int i = 0; i < n; ++i)
      cout << a[i] << endl;
  }

  return 0;
}
