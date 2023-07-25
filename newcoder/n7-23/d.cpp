#include <cmath>
#include <iostream>
#include <map>
#define ll long long

using namespace std;

int mmod(ll a, ll b) {
  if (a % b == 0) {
    return 1;
  }
  return 0;
}

int main() {
  map<ll, ll> a, b, ans;
  ll x, y;
  cin >> x >> y;
  for (ll i = 1; i <= sqrt(x); i++) {
    if (mmod(x, i)) {
      a[i] = 1;
      a[x / i] = 1;
    }
  }

  for (ll i = 1; i <= sqrt(y); i++) {
    if (mmod(y, i)) {
      b[i] = 1;
      b[y / i] = 1;
    }
  }

  for (auto &i : a) {
    for (auto &j : b) {
      ans[i.first * j.first] = 1;
    }
  }
  cout << ans.size() << endl;

  for (auto &i : ans) {
    if (i.second) {
      cout << i.first << " ";
    }
  }

  return 0;
}
