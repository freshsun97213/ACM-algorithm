#include <algorithm>
#include <cstring>
#include <iostream>
#include <numeric>
#include <vector>
#define i64 long long

#define vl vector<i64>
using namespace std;
vl pa, sum;

int find(int x) {
  if (pa[x] == x) {
    return x;
  }
  return pa[x] = find(pa[x]); // 路径优化
}

int main() {
  int n, m;
  cin >> n >> m;

  iota(pa.begin(), pa.begin() + n + 1, 0);
  sum.resize(n + 1);
  for (int i = 0; i < n; i++) {
    sum[i] = 1;
  }

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if (a > b)
      swap(a, b);
    int t = find(a);
    pa[b] = t;
    sum[t];
  }

  return 0;
}
