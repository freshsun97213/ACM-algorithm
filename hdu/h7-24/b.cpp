#include <bits/stdc++.h>
#include <cmath>
#include <ctime>
#include <iostream>

#define ll long long
const int N = 1e5 + 10;

int n2[1000] = {1,   2,    4,    8,    16,   32,    64,    128,   256,
                512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072};

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
    // cerr << "\n" << (double)clock() / CLOCKS_PER_SEC * 1000 << "MS" << endl;
  }

  return 0;
}
