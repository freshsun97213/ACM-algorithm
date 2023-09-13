#include <iostream>
#define ll long long

using namespace std;
const int N = 5e6 + 10;
ll a[N];
ll m(ll l, ll r) {
  if (r < l) {
    ll t = r;
    r = l;
    l = t;
  }
  if (r - l <= 5) {
    ll mx = a[l];
    for (int i = l; i <= r; i++) {
      mx = max(mx, a[i]);
    }
    return mx;
  } else {
    ll mid = l + (r - l) >> 1;

    return (m(l, mid) % max(m(mid + 1, r), (ll)7) + (a[mid] - 1));
  }
}

int main() {
  ll n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cout << m(1, n) << endl;
  return 0;
}
