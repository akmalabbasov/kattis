#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
  int n;
  cin >> n;

  int m, s;
  double summ_m, summ_s = 0;
  for (int i = 0; i < n; ++i) {
    cin >> m >> s;
    summ_m += m;
    summ_s += s;
  }
 
  double avg_min_length = summ_s / (summ_m*60);
  if (avg_min_length > 1.0)
    cout << setprecision(10) << avg_min_length << endl;
  else
    cout << "measurement error" << endl;
  return 0;
}
