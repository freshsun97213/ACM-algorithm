#include <iostream>
#define ll long long

using namespace std;
const int N = 1e5 + 10;
ll a[N];
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll f = 0, mx = 0;

    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      if (a[i] < a[i - 1]) {
        f = 1;
      }
    }
    if (f) {
      for (int i = 2; i <= n; i++) {
        if (a[i] < a[i - 1]) {
          mx = max(mx, a[i - 1]);
        }
      }
      cout << mx << endl;
    } else
      cout << "0" << endl;
  }

  return 0;
}
