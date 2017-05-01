#include <iostream>

using namespace std;

// Assuming c = a operation b
char find_operation(int a, int b, int c) {
  if (c == a+b)
    return '+';
  if (c == a-b)
    return '-';
  if (c == a*b)
    return '*';
  if (c == a/b)
    return '/';

  return 'x';
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  char op = find_operation(a, b, c);
  if (op != 'x') {
    cout << a << op << b << '=' << c << endl;

  } else {
    op = find_operation(b, c, a);
    cout << a << '=' << b << op << c << endl;
  }

  return 0;
}
