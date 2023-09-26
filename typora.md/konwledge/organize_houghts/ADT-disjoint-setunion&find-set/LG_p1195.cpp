#include <algorithm>
#include <iostream>
// 并查集  加上 最小生成树
//
using namespace std;
const int N = 1e3 + 10; // the bun of cloud

int n, m, k;

struct cloud {
  int at, to, value;
  friend bool operator<(const cloud &a, const cloud &b) {
    if (a.at > n || a.to > n) {
      return a.at < b.at;
    }
    return a.value < b.value;
  }
} c[N];

void init() {
  for (int i = 1; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int x = i * 1000 + j;
      c[x].value = 0;
      c[x].at = i;
      c[x].to = j;
    }
  }
  return;
}

int main() {
  cin >> n >> m >> k;

  for (int i = 0; i < m; i++) {
    int x, y, l, ind = 0;
    cin >> x >> y >> l;
    if (x != y) {
      if (x > y) {
        swap(x, y);
      }
      ind = x * 1000 + y;
      c[ind].value = l;
    }
  }
  sort(c + 1001, c + 1001 + n * (1000));
  if (k > n) {
    cout << "No Answer" << endl;
  } else {
    int cnt = 0;
    for (int i = 1001; cnt < n - k)
  }

  return 0;
}
