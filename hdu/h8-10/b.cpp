// 单点修改加区间查询 ， 其实也就是单点查询
#include <iostream>
#define ll long long
#define int ll
using namespace std;
const int N = 2e5 + 10;
ll tree[N], a[N], mx;
int lowbit(int x) { return x & (-x); }
// 点x掌管的区间是[x - log2（lowbit（x））, x];
int sum(int x) { //   TLE 了
  int ans = 0;
  for (; x; x -= lowbit(x)) {
    ans += tree[x];
  }
  return ans;
}
void update(int x, int k) {
  // int cha = sum(x) - sum(x - 1);
  for (; x <= N; x += lowbit(x)) {
    tree[x] += k;
  }
}
void update2(int x, int k) {
  int cha = sum(x) - sum(x - 1);
  for (; x <= N; x += lowbit(x)) {
    tree[x] += k - cha;
  }
}

// 需要进行离散化 （不能够）
// 其实头和尾部的异或的结果都是0，是无所谓的
// 其次只要是区间是偶数个的时候，区间异或直接就等于零了
// 只需要对于奇数区间进行异或运算
// 奇数区间会留下奇数
signed main() {
  int n, m;
  cin >> n >> m;
  // cout << lowbit(n) << " " << lowbit(m);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    update(i, a[i]);
  }

  for (int i = 1; i <= m; i++) {
    int op, x, y;
    cin >> op >> x >> y;
    if (op == 1) {
      update2(x, y);
    } else {
      if ((y - x + 1) % 2 == 0) {
        cout << "0" << endl;
      } else {
        ll a = 0;
        for (; x <= y; x += 2) {
          a ^= (sum(x) - sum(x - 1));
        }
        cout << a << endl;
      }
    }
  }

  return 0;
}
