#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n * (n - 1) / 2];
    for (int i = 0; i < n * (n - 1) / 2; ++i)
      cin >> a[i];
    sort(a, a + n * (n - 1) / 2);
    int u = 0, v = n;
    while (u < n * (n - 1) / 2) {
      cout << a[u] << ' ';
      --v;
      u += v;
    }
    cout << a[n * (n - 1) / 2 - 1] << '\n';
  }
  return 0;
}
