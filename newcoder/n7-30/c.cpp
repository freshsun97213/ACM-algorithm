#include <bits/stdc++.h>
using namespace std;
#define de(x) cerr << #x << " " << x;

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
  int ans = 0;
  for (int i = 1; i <= n; i += 1) {
    function<void(int, int, i64)> dfs = [&](int u, int p, i64 x) {
      for (int v : g[u]) {
        if (v != p) {
          i64 y = x * 2 + s[v] - '0';
          if (y <= r) {
            ans += y >= l;
            dfs(v, u, y);
          }
        }
      }
    };
    dfs(i, 0, s[i] - '0');
  }
  cout << ans;
}

// #include <cmath>
// #include <iostream>
// #include <vector>
//
// #define ll long long
//
// using namespace std;
//
// const int N = 1e4;
//
// struct node {
//   int num;
// } nod[N];
//
// int main() {
//   ll n, l, r, u, v;
//   cin >> n >> l >> r;
//   ll lenl = log2(l), lenr = log2(r);
//
//   string ss;
//   cin >> ss;
//   for (int i = 1; i <= n; i++) {
//     int a, b;
//     cin >> a >> b;
//     // nod[a].s = nod;
//   }
// }
