#include <algorithm>
#include <cstring>
#include <iostream>
#include <numeric>
#include <vector>
#define i64 long long

using namespace std;
const int N = 1e5 + 10;
vector<int> f;
i64 sum[N];

struct dsu {
  vector<size_t> pa, size, sum;

  explicit dsu(size_t size_)
      : pa(size_ * 2), size(size_ * 2 + 1), sum(size_ * 2 + 1) {
    iota(pa.begin(), pa.begin() + size_, size_);
    iota(pa.begin() + size_, pa.end(), size_);
    iota(sum.begin() + size_, sum.end(), 0);
  }
  int find(int x) { return pa[x] == x ? x : pa[x] = find(pa[x]); }

  void unite(int x, int y) { pa[find(x)] = find(y); }
};

int main() {
  int n, m;
  cin >> n >> m;
  dsu dsu(n);
  memset(sum, 1, sizeof sum);
  for (int i = -0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if (a < b) {
      swap(a, b);
    }
    dsu.pa[b] = dsu.find(a);
  }

  return 0;
}
// 并查集的存储是很特殊的 需要满足以下两种条件
// 条件一 ： 给出下标 能够知道该节点的父节点是那一个
// 条件二 ： 最好可以知道自己的子节点的个数 和 每一个都是谁，
// 这些条件决定了并查集最好能够用结构体去写
//   //数组所能够做到的就只有，找根节点是否相同
// 如果需要进行合并操作的话，那么就不能够只用数组来实现了
// 当需要求一个 并查集合的个数的时候也，不能够用数组
// （并非不能够用数组，可以再开一个数组，然后将这个数组里面存下个数）
// 但是需要对于数组进行一次遍历
//
//
// struct dsu{
//   vector <size_t>pa;// size_t 就是 当前系统所支持的整形等效于
//   // size_t == sizeof(int);注意的是size_t 是无符号的
//   explicit dsu(int size) : pa(size){
//     iota(pa.begin(),pa.end(),0);
//     // iota(sum.begin(),sum.end(),1);
//   }
//   //explicit 关键字 用于类内的构造函数的声明
//   //被其修饰的构造函数的类，不再能够发生隐式 的类型转换
//   int find(int x){return pa[x] == x ? x : pa[x] = find(pa[x]);}
//   void unite(int x,int y){
//     pa[find(x)] = find(y);
//   }
// };
//
