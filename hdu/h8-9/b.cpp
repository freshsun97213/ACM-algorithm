#include <iostream>
#include <string>
// #define int long long
// 人生建议时间复杂度大的时候千万不要 使用define
//
using namespace std;
const int N = 1e7 + 10;

int a[N], d[N];
inline void build(int l, int r, int p);
inline int query(int x, int y, int l, int r, int p);
inline void add(int x, int l, int r, int p, int k);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;
    cout << "Case " << i << ":" << endl;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    build(1, n, 1);
    while (cin >> s) {
      int x, y;
      if (s[0] == 'E') {
        break;
      }
      cin >> x >> y;
      if (s[0] == 'Q') {
        cout << query(x, y, 1, n, 1) << endl;
      } else if (s[0] == 'A') {
        add(x, 1, n, 1, y);
      } else if (s[0] == 'S') {
        y = -y;
        add(x, 1, n, 1, y);
      }
    }
  }

  return 0;
}

inline int query(int x, int y, int l, int r, int p) {
  if (x <= l && r <= y) {
    return d[p];
  }
  int m = l + ((r - l) >> 1);
  int sum = 0;
  if (x <= m) {
    sum = query(x, y, l, m, p * 2);
  }
  if (y > m) {
    sum += query(x, y, m + 1, r, p * 2 + 1);
  }
  return sum;
}

inline void add(int x, int l, int r, int p, int k) {
  if (l == r) {
    d[p] += k;
    return;
  }
  int m = l + ((r - l) >> 1);
  if (x <= m) {
    // d[p * 2] += k;
    add(x, l, m, p * 2, k);
  } else {
    // d[p * 2 + 1] += k;
    add(x, m + 1, r, p * 2 + 1, k);
  }
  d[p] = d[p * 2] + d[p * 2 + 1];
  return;
}

inline void build(int l, int r, int p) {
  if (l == r) {
    d[p] = a[l];
    return;
  }
  int m = l + ((r - l) >> 1);
  build(l, m, p * 2);
  build(m + 1, r, p * 2 + 1);
  d[p] = d[p * 2 + 1] + d[p * 2];
  return;
}
