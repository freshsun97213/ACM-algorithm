#include <bits/stdc++.h>
#define de(x) cerr << #x << " " << x << endl;

using namespace std;

using i64 = int64_t;
constexpr i64 mod = 998244353;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  i64 l, r;
  cin >> n >> l >> r;
  string s;
  cin >> s;
  s = " " + s;
  vector<vector<int>> g(n + 1);
  for (int i = 1, u, v; i < n; i += 1) {
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  for (int i = 0; i < g.size(); i++) {
    for (int j = 0; j < g[0].size(); j++) {
      de(g[i][j]);
    }
  }
  // for(auto y : g){
  //   for(auto x : g){
  //     cout << y. << " ";
  //   }
  // }

  // int ans = 0;
  // for (int i = 1; i <= n; i += 1) {
  //     function<void(int, int, i64)> dfs = [&](int u, int p, i64 x) {
  //         for (int v : g[u]) {
  //             if (v != p) {
  //                 i64 y = x * 2 + s[v] - '0';
  //                 if (y <= r) {
  //                     ans += y >= l;
  //                     dfs(v, u, y);
  //                 }
  //             }
  //         }
  //     };
  //     dfs(i, 0, s[i] - '0');
  // }
  // cout << ans;
}
