#include <iostream>

#define deb(x) cerr << #x << " " << x << endl;
using namespace std;
const int N = 1e5 + 10;
int f[N];

int find(int x) {
  if (x == f[x]) {
    return x;
  } else {
    // deb(x);
    return f[x] = find(f[x]);
    // 进行路径优化
  }
}

void merge(int x, int y) {
  f[x] = find(x);
  f[y] = find(y);
  if (f[x] == f[y]) {
    printf("Y\n");
    return;
  } else {
    printf("N\n");
    // f[y] = x;
    // return;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    f[i] = i;
  }

  for (int i = 0; i < m; i++) {
    int op, a, b;
    cin >> op >> a >> b;
    if (op == 1)
      f[find(a)] = f[find(b)];
    else {
      merge(a, b);
    }
  }

  return 0;
}
