#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
  char x[6];
  cin >> x;

  char * p = NULL;
  for (int i = strlen(x) - 1; i > 0; --i)
    if (x[i] > x[i-1]) {
      p = &x[i-1];
      break;
    }

  if (p == NULL) {
    cout << '0' << endl;
    return 0;
  }

  for (int i = strlen(x) - 1; i > 0; --i)
    if (x[i] > *p) {
      char tmp = x[i];
      x[i] = *p;
      *p = tmp;
      break;
    }

  sort(p+1, x + strlen(x));
  cout << x << endl;
  return 0;
}
