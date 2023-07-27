#include <algorithm>
#include <cmath>
#include <iostream>

#define debug(x) cerr << #x << " " << x << endl;
#define ll long long

using namespace std;
const int N = 1e6 + 10;
ll cow[N];
ll c, mx, n;

int check(ll mid) {
  int cnt = 1;
  ll s = cow[1];
  for (int i = 2; i <= n + 1; i++) {
    if (mid <= cow[i] - s) {
      // debug(cow[i] - s);
      cnt++;
      // debug(cnt);
      // debug(s);
      s = cow[i];
      // debug(s);
      // debug(c);
      if (cnt >= c) { // 个数相同的话，最后的答案有可能会有更小的，就比如可能3
                      // 5直接都是一个答案 但是答案我们最后会去取到的会是3
                      // 这个时候就应该让右边界，减去啊
        return 1; //
      }
    }
  }
  if (cnt >= c) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  // ll n,c,mx = 0;
  cin >> n >> c;
  for (ll i = 1; i <= n; i++) {
    cin >> cow[i];
    mx += cow[i];
  }
  sort(cow, cow + n + 1, less<ll>());
  /*for (ll i = n; i > 2; i--) {
    cow[i] = cow[i] - cow[i - 1];
    debug(i);
    debug(cow[i]);
  }
*/
  // sort(cow, cow + n + 1);

  ll l = 0, r = mx;

  while (l < r) {
    ll mid = (l + r + 1) / 2;
    // debug(mid);
    if (check(mid)) {
      l = mid;
    } else {
      r = mid - 1;
    }
  }
  cout << l << endl;
  return 0;
}
