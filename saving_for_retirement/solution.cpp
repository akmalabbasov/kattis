#include <iostream>

using namespace std;

int main() {
  int b, br, bs, a, as;
  cin >> b >> br >> bs >> a >> as;

  int tot = (br - b) * bs + 1;
  int years = tot / as + (tot%as ? 1 : 0);
  cout << a + years << endl;
  return 0;
}
