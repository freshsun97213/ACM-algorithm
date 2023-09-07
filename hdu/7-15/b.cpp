#include <iostream>

#define ll long long

using namespace std;
const int N = 1e5 + 10;
ll a[N], b[N];

//

int main() {
  ll k;
  while (cin >> k) {
    ll sum = 0;
    for (int i = k + 1; i <= 2 * k; i++) {
      double x = (k * 1.0 * i) / (i - k);
      if (x - (ll)x < 1e-9) {
        a[sum] = (ll)x;
        b[sum++] = i;
      }
    }
    cout << sum << endl;
    for (int i = 0; i < sum; i++) {
      cout << "1/" << k << " = 1/" << a[i] << " + 1/" << b[i] << endl;
    }
  }
  return 0;
}
