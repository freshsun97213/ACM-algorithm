#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
// const int N =1e5+10;

// int rank[N];

class DSU {
public:
  vector<int> fa;
  // static int N;
  // static int N =1e5+10;
  DSU(int n) {
    fa.resize(n);
    iota(fa.begin(), fa.end(), 0);
  }

  int find(int x) {
    if (fa[x] == x) {
      return x;
    } else {
      return fa[x] = find(fa[x]); // 路径优化
      // 目的是 將所有的 子节点的值改成为 最老的那一个父节点
    }
  }
  // const int N =1e5+10;

  int rank[100010];
  // 路径压缩 和 按秩合并 不能够同时 使用
  void merge(int x, int y) {
    fa[find(x)] = find(y); // 不用纠结，它们这个节点是不是 根节点嘛？？？
    // if(rank[fa[x]] > rank[fa[y]]){
    //
    // }
  }
};
int main() {
  int n, m;
  cin >> n >> m;
  DSU dsu(n + 1);
  for (int i = 0; i < n; i++) {
    int op, a, b;
    cin >> op >> a >> b;
    if (op == 1) {
      dsu.merge(a, b);
    }
  }
}
