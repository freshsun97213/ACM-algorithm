#include <iostream>

#define ll long long

using namespace std;
const int N = 1e6 + 10;
ll d[N], b[N], a[N];

void build(int s, int t, int p) {
  if (t == s) {
    d[p] = a[t];
    return;
  }
  int m = s + ((t - s) >> 1);
  build(s, m, p * 2);
  build(m + 1, t, p * 2 + 1);
  d[p] = d[p * 2] + d[p * 2 + 1];
}

ll qurey(int l, int r, int s, int t, int p) {
  if (l <= s && t <= r) {
    return d[p];
  }
  int m = s + ((t - s) >> 1);
  if (b[p]) {
    // d[p] += b[p] * (t - s )他这里写的是左右儿节点 的更改
    // 是为了符合这个函数的递归性质，可以将从底到上都完成
    d[p * 2] += b[p] * (m - s + 1), d[p * 2 + 1] += b[p] * (t - m);
    b[p * 2] += b[p], b[p * 2 + 1] += b[p];
    b[p] = 0;
  }

  ll sum = 0;
  // 这个等于号是根据我们建树的时候，先左子树，再有右子树的情况来决定的
  if (l <= m) {
    sum = qurey(l, r, s, m, p * 2);
  }
  if (m < r) {
    sum += qurey(l, r, m + 1, t, p * 2 + 1);
  }
  return sum;
};

void modify(int l, int r, int s, int t, int p, int k) {
  if (l <= s && t <= r) {
    d[p] += k * (t - s + 1);
    b[p] += k;
    return;
  }

  int m = s + ((t - s) >> 1);
  if (b[p]) {
    d[p * 2] += b[p] * (m - s + 1), d[p * 2 + 1] += b[p] * (t - m);
    b[p * 2] += b[p], b[p * 2 + 1] += b[p];
    b[p] = 0;
  }
  if (l <= m) {
    modify(l, r, s, m, p * 2, k);
  }
  if (r > m) {
    modify(l, r, m + 1, t, p * 2 + 1, k);
  }
  d[p] = d[p * 2] + d[p * 2 + 1];
}
// 因为懒标记的地方，一定是完全符合的，所以我们，在下次查询或者是下次修改的时候，如果
// 懒惰标记已有值的情况，则下放置，但是，当是最后一层的地方，无需再次下放，原因在于
// 下放之前就已经将d数组也就是线段树数组 加上了懒标记里面的值了

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  build(1, n, 1);
  for (int i = 0; i < m; i++) {
    int op, x, y, k;
    cin >> op;
    if (op == 1) {
      cin >> x >> y >> k;
      modify(x, y, 1, n, 1, k);
    } else {
      cin >> x >> y;
      cout << qurey(x, y, 1, n, 1) << endl;
    }
  }
  return 0;
}
