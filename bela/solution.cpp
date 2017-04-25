#include <iostream>

using namespace std;

int main() {
  char a[100] = {0};
  a['A'] = 11; 
  a['K'] = 4;
  a['Q'] = 3;
  a['J'] = 2;
  a['T'] = 10;

  int n;
  char d;
  
  cin >> n >> d;
  string t;
  int s = 0;
  for (int i = 0; i < n*4; ++i) {
    cin >> t;
    if (t[0] == 'J' && t[1] == d)
      s += 20;
    else if (t[0] == '9' && t[1] == d)
      s += 14;
    else
      s += (int) a[t[0]];
  }

  cout << s << endl;
  return 0;
}
