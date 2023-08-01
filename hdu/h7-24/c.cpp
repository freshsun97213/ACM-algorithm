#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include <vector>
#define de(x) cerr << #x << " " << x << endl;
#define ll long long

const int N = 1e5 + 10;

using namespace std;

// vector a();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    ll n, ans;
    cin >> n >> ans;
    int mx = n + 2;
    vector<int> a(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      a[i] += a[i - 1];
      // de(a[i]);
    }
    // de(ans);
    int j = 1;
    for (int i = 0; i < a.size(); i++) {
      for (; j < a.size(); j++) {
        if ((a[j] - a[i]) >= ans) {
          mx = min(mx, (j - i));
          // de(j);
          // de(i);
          // de(j - i);
          // de(mx);
          i++;
          j--;
        }
      }
    }

    cout << ((mx == n + 2) ? 0 : mx) << endl;
  }
  // cout << clock() * 1000 / CLOCKS_PER_SEC << "MS" << endl;
  return 0;
}
