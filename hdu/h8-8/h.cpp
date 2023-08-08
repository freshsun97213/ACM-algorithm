#include <iostream>

#define ll long long

using namespace std;
const int N = 2e6 + 10;
ll tree[N], a[N];
void build(int l, int r, int p);
// O(m logn)
void _p(int x, int k, int l, int r, int index);

int find(int x, int y, int l, int r, int index);

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  build(1, n, 1);
  // for (int i = 0; i <= 4 * n; i++) {
  //   cout << tree[i] << " ";
  // }
  //
  for (int i = 1; i <= m; i++) {
    int op, x, y;
    cin >> op >> x >> y;
    if (op == 1) {
      _p(x, y, 1, n, 1);
    } else {
      cout << find(x, y, 1, n, 1) << endl;
    }
  }

  return 0;
}

// 单点操作 ， 只有区间操作的时候，懒标记才有用
// 懒标记对于时间的优化真的不是很高，只有在m也就是
// 区间很大的时候懒标记才有很大的用处，操作越趋近于单点
// 时间复杂度的优化就越少
void _p(int x, int k, int l, int r, int index) {
  if (l >= r) {
    tree[index] += k;
    return;
  }
  int mid = l + ((r - l) >> 1);
  if (x <= mid) { // 这里少加了一个等于符号就导致了
    // 这里的结果不对了，但是按照道理来说不应该啊
    r = mid;
    tree[index] += k;
    index = index * 2;
    _p(x, k, l, r, index);
  } else {
    l = mid + 1;
    tree[index] += k;
    index = index * 2 + 1;
    _p(x, k, l, r, index);
  }
}

void build(int l, int r, int p) {
  if (l == r) {
    tree[p] = a[l];
    return;
  }
  int mid = l + ((r - l) >> 1);
  build(l, mid, p * 2), build(mid + 1, r, p * 2 + 1);
  tree[p] = tree[p * 2] + tree[(p * 2) + 1];
  return;
}
int find(int x, int y, int l, int r, int index) {
  if ((x <= l && r <= y) || l == r) {
    return tree[index];
  }
  // 这里将是 最难以理解的代码部分
  int m = l + ((r - l) >> 1);
  int sum = 0;
  if (x <= m) {
    sum = find(x, y, l, m, index * 2);
  }
  if (y > m) {
    sum += find(x, y, m + 1, r, index * 2 + 1);
  }
  return sum;
}
