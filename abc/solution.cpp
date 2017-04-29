#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a[3];
  for (int i = 0; i < 3; ++i) {
    cin >> a[i];
  }
  
  sort(a, a+3);
  
  char tmp;
  for (int i = 0; i < 3; ++i) {
    cin >> tmp;
    cout << a[tmp-'A'] << " ";
  }
  cout << endl;
  return 0;
}
