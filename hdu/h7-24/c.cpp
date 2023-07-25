#include <algorithm>
#include <functional>
#include <iostream>
#define ll long long

const int N = 1e5 + 10;

using namespace std;

ll a[N];

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n, ans;
    cin >> n >> ans;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a, a + n, greater<ll>);
  }

  return 0;
}
