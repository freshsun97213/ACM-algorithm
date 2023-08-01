#include <algorithm>
#include <cmath>
#include <iostream>
#define ll long long
#define de(x) cerr << #x << " " << x << " ";

using namespace std;
const int N = 2e5 + 10;
const int N2 = 4e5 + 10;
ll f[N2][20], ans[N];
ll n, m;

struct stu {
  ll l, r, id;
  inline friend bool operator<(const stu &a, const stu &b) { return a.l < b.l; }
} s[N2];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> s[i].l >> s[i].r;
    if (s[i].l > s[i].r) {
      s[i].r += m;
    }
    s[i].id = i;
  }
  sort(s + 1, s + n + 1);
  for (int i = 1; i <= n; i++) {
    s[n + i] = s[i];
    s[n + i].l = s[i].l + m;
    s[n + i].r = s[i].r + m;
    // de(s[i].l);
    // de(s[i].r);
  }
  // cout << endl;

  // 初始化这个f数组，指出每一个的下一个位置
  for (int i = 1; i <= 2 * n; i++) {
    int p = i;
    // de(p);
    while (s[i].r >= s[p].l && p <= 2 * n) {
      p++;
    }
    // de(p);
    p--;
    f[i][0] = p;
    // de(f[i][0]);
  }

  cout << endl;
  for (int i = 1; i < 20;
       i++) { // 这里的 等于 改成等于小于的情况会导致，最后的答案改变。
    for (int j = 1; j <= 2 * n; j++) {
      f[j][i] = f[f[j][i - 1]][i - 1];
      // de(f[j][i]);
    }
    // cout << endl;
  }
  // ll an = 0;
  // de(s[4].l + m);
  // de(s[f[4][2]].r);
  for (int j = 1; j <= n; j++) {
    ll an = 0;
    int now = j, lim = s[j].l + m;
    for (int i = 19; i >= 0; i--) {
      if (f[now][i] != 0 && s[f[now][i]].r < lim) {
        an += 1 << i;
        now = f[now][i];
      }
    }
    ans[s[j].id] = an + 2;
  }
  for (int i = 1; i <= n; i++)
    cout << ans[i] << " ";

  return 0;
}
