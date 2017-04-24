#include <iostream>
#include <string>

using namespace std;

int main() {
  int h, m;
  cin >> h >> m;

  if (m < 45) {
    m = 60 - (45 - m);
    h = h == 0 ? 23 : h - 1;

  } else {
    m = m - 45;
  }
  
  cout << h << " " << m << endl;
  return 0;
}
