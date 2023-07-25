#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl;
#define int long long
#define pii pair<int, int>
#define bg begin
#define vi vector<int>
#define vp vector<pii>
#define vvi vector<vi>
#define pb push_back
#define pp pair<pii, pii>
#define ppi pair<pii, int>
#define ordered_set                                                            \
  tree<pii, null_type, greater<pii>, rb_tree_tag,                              \
       tree_order_statistics_node_update>
#define ipp pair<int, pii>
#define vpp vector<ppi>
#define F(x, zzz) for (int zzz = 1; zzz <= x; zzz++)
const int inf = 2e18 + 5;
int MOD = 998244353;
const int N = 2e5 + 1;

void solve() {
  int n, k;
  cin >> n >> k;
  int x = 1, y = 1;
  bool ok = 1;
  for (int i = 0; i < k - 3; i++) {
    int z = x + y;
    x = y, y = z;
    if (x > n && y > n) {
      ok = 0;
      break;
    }
  }
  if (!ok)
    cout << "0\n";
  else {
    int ans = 0;
    for (int i = 0; i * x <= n; i++) {
      debug(x);
      debug(i);
      if ((n - i * x) % y == 0 && i <= (n - i * x) / y)
        ans++;
    }
    cout << ans << '\n';
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
#ifdef Local
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
#endif
  int t = 1;
  cin >> t;
  while (t--)
    solve();
}
