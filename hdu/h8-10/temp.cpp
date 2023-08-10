#include <iostream>

using namespace std;
const int N = 1e6 + 10;
int a[N], d[N], di[N];
int n, m;
int lowbit(int x) { return x & (-x); }

void update(int x, int k) {
  for (; x <= N; x += lowbit(x)) {
    d[x] += k;
  }
}

void build() {
  for (int i = 1; i <= n; i++) {
    d[i] += a[i] - a[i - 1];
    int j;
    j = i + lowbit(i);
    if (j <= N) {
      d[j] += d[i];
    }
  }
}

int main() {
  cin >> n >> m;
  // cin >> a[1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    // update(i,a[i] - a[i- 1]);
    // update();
  }
  build(); // 一旦有

  return 0;
}
