#include <bits/stdc++.h>

using i64 = long long;

void solve() {
  int n, m;
  std::cin >> n >> m;

  std::string s;
  std::cin >> s;

  std::set<std::pair<int, int>> S;

  std::vector<int> nxt(n + 1, n), lst(n + 1, -1);
  for (int i = n - 1; i >= 0; i--) {
    nxt[i] = s[i] == '1' ? i : nxt[i + 1];
  }
  for (int i = 0; i < n; i++) {
    lst[i + 1] = s[i] == '0' ? i : lst[i];
  }

  while (m--) {
    int l, r;
    std::cin >> l >> r;
    l--;
    l = nxt[l];
    r = lst[r];
    if (l > r) {
      l = r = -1;
    }
    S.emplace(l, r);
  }
  std::cout << S.size() << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
