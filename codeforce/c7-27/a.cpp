#include <cmath>
#include <iostream>

#define ll long long

using namespace std;

ll a, b, c;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    a--;
    ll ans = min(a, b + c);
    cout << ans * 2 + 1 << endl;
  }

  return 0;
}
