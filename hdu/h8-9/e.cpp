#include <cmath>
#include <iostream>
#define int long long
#define de(x) cerr << #x << " " << x << endl;
using namespace std;
const int N = 1e7 + 10;
int d[N], a[N];
void build(int l, int r, int p) {
  if (l == r) {
    d[p] = a[l];
    return;
  }
  int m = l + ((r - l) >> 1);
  build(l, m, p << 1);
  build(m + 1, r, p << 1 | 1);
  d[p] = max(d[p << 1], d[p << 1 | 1]);
  return;
}
int query(int x, int y, int l, int r, int p);
void change(int x, int l, int r, int p, int k);

signed main() {
  int n, m;
  while (~scanf("%lld %lld", &n, &m)) {
    for (int i = 1; i <= n; i++) {
      scanf("%lld", &a[i]);
    }
    build(1, n, 1);
    // for (int i = 1; i <= 4 * n; i++) {
    //   cout << d[i] << " ";
    // }
    for (int i = 0; i < m; i++) {
      // char c = getchar();
      string s;
      int x, y;
      cin >> s;
      scanf(" %lld %lld", &x, &y);
      // de(c) de(x) de(y);
      if (s == "Q") {
        cout << query(x, y, 1, n, 1) << endl;
      } else if (s == "U") {
        change(x, 1, n, 1, y);
        // for (int i = 2; i <= 4 * n; i++) {
        //   cout << d[i] << " ";
        // }
      }
    }
  }
  return 0;
}

int query(int x, int y, int l, int r, int p) {
  if (x <= l && r <= y) {
    return d[p];
  }

  int m = l + ((r - l) >> 1);
  int ans = -1e9;

  // de(m);
  if (x <= m) {
    ans = max(ans, query(x, y, l, m, p << 1));
  }
  if (y > m) {
    ans = max(ans, query(x, y, m + 1, r, p << 1 | 1));
  }
  // de(a) de(b);
  // cout << a << " " << b << endl;
  return ans;
}

void change(int x, int l, int r, int p, int k) {
  if (l == x && x == r) {
    d[p] = k;
    return;
  }
  int m = l + ((r - l) >> 1);
  if (x <= m) {
    change(x, l, m, p << 1, k);
  } else {
    change(x, m + 1, r, p << 1 | 1, k);
  }
  d[p] = max(d[p << 2], d[p << 1 | 1]);
  return;
}
