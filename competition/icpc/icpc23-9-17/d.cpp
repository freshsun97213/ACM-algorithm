#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#define int long long
using namespace std;

const int N = 1e6 + 10;
int n;
// 简单图的定义 ： 只要是无向图，并且没有自边或者重边都可有
//  并且 无所谓 是否在图中，所有的点都有边，可以没有边
int disjset[N];
void init() {
  for (int i = 1; i <= n; i++) {
    disjset[i] = -1;
  }
}
int find(int x) {
  if (disjset[x] < 0) {
    return x;
  }
  return find(disjset[x]);
}

void setunion(int x, int y) {
  // int a=dis,b;
  if (x == y) {
    return;
  }
  if (disjset[x] <= disjset[y]) {
    disjset[x] += disjset[y];
    disjset[y] = x;
  } else {
    disjset[y] += disjset[x];
    disjset[x] = y;
  }
  return;
}

signed main() {
  int m;
  cin >> n >> m;
  init();
  // for (int i = 0; i <= n; i++) {
  //   cout << i << " " << disjset[i] << " ";
  // }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    int x = find(a), y = find(b);
    if (x != y)
      setunion(x, y);
    // for (int i = 0; i <= n; i++) {
    //   cout << i << " " << disjset[i] << " ";
    // }
  }

  sort(disjset + 1, disjset + 1 + n);
  int sum = 0;
  for (int i = 1; i <= n && disjset[i] < 0; i++) {
    sum += (disjset[i] * (disjset[i] + 1)) / 2;
  }

  if (sum != m) {
    cout << sum - m << endl;
  } else {

    int index = n;
    for (int i = 2; i <= n - 1; i++) {
      if (disjset[i - 1] < 0 && disjset[i] < 0 && disjset[i + 1] >= 0) {
        index = i;
        break;
      }
    }
    // for (int i = 0; i < n; i++) {
    //   cout << i << " " << disjset[i] << " ";
    // }
    cout << disjset[index] * disjset[index - 1] << endl;
  }
  return 0;
}

// 按大小ADT-disjoint-set 并查集，
// find ： 找到根节点，但是不要输出根节点里面的值，只输出，其下标就好
// 因为根节点的值是 等价关系 集合的元素数量大小
//
// union  ： 直接合并两个节点就好，将个数大小 小的内个根节点的值
// 合并到大的里面，两者相减，再将小的，改成根节点，
// 我们判断退出的 递归条件是，是否这个值是小于0的
// 并且将 小的合并
// 最后将数组进行排序，找到小于零的最大的两个数字，相乘;
