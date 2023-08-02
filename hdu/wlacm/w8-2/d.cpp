#include <iostream>

using namespace std;
int n, m;
int pp[100], tag[100];

void dfs(int a, int x) {

  if (n - a == m) {
    for (int i = 0; i < m; i++) {
      printf("%3d", pp[i]);
    }
    cout << endl;
    return;
  }

  for (int i = x; i <= n - m + n - a + 1; i++) {
    if (tag[i] == 0) {
      tag[i] = 1;
      pp[n - a] = i;
      dfs(a - 1, i);
      tag[i] = 0;
    }
  }
  return;
}

int main() {

  while (cin >> n >> m) {
    dfs(n, 1);
  }

  return 0;
}
