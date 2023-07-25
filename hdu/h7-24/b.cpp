#include <bits/stdc++.h>
#include <cmath>
#include <ctime>
#include <iostream>

#define ll long long
const int N = 1e5 + 10;

using namespace std;

ll a[N];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    ll s, n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      a[i] += a[i - 1];
      // debug(a[i]);
    }

    ll sum = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j++) {
        if (a[j] - a[i - 1] <= 1) {
          sum += (i + j);
        } else {
          sum += (floor(log2((a[j] - a[i - 1]))) + 1) * (i + j);
        }
      }
    }
    cout << sum << endl;
    cerr << "\n" << (double)clock() / CLOCKS_PER_SEC * 1000 << "MS" << endl;
  }

  return 0;
}
