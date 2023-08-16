#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int x, y, l;
};
vector<Node> ans;
int n, m;

void f(int x, int y, int l, int r, int flag) {
  if (x == n - l && y == m - l) {
    ans.push_back({x, y, l});
    return;
  }

  int stX = x, stY = y, k = 0;
  while (stX >= 0 && stX + l < n && stY >= 0 && stY + l < m) {
    ans.push_back({stX, stY, l});
    if (flag) {
      stX += l;
    } else {
      stY += l;
    }
    k++;
  }

  if (flag) {
    f(x + k * l, y, min(l, r - l), max(l, r - l), 0);
  } else {
    f(x, y + k * l, min(l, r - l), max(l, r - l), 1);
  }
}

void solve() {
  ans.clear();
  cin >> n >> m;
  f(0, 0, min(n, m), max(n, m), (m < n));
  if (ans.size()) {
    cout << "YES\n" << ans.size() << "\n";
    for (auto &x : ans) {
      cout << x.x << " " << x.y << " " << x.l << "\n";
    }
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
