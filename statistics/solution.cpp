#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
  string line;
  int k = 1;
  while ( getline(cin, line) ) {
    if (line.empty())
      break;

    istringstream l(line);
    int n;
    l >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
      l >> a[i];
    }
    sort(a, a+n);
    cout << "Case " << k << ": " << a[0] << " " << a[n-1] << " " << a[n-1] - a[0] << endl;
    k++;
  }

  return 0;
}
