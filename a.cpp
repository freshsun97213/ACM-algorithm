#include <iostream>
#include <numeric>
#include <vector>
#define de(x) cerr << #x << " " << x << endl;
using namespace std;
const int N = 1e5 + 10;
int a[N], ans[N];

// vector<int> ans;

void dfs(int n, int step) {
  if (n == step) {
    // de(ans.size());
    for (int i = 0; i < n; i++) {
      printf("%5d", ans[i]);
    }
    printf("\n");
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (a[i] == 0) {
      ans[step] = i;
      a[i] = 1;
      dfs(n, step + 1);
      a[i] = 0;
    }
  }
}

int main() {
  int n;
  cin >> n;

  dfs(n, 0);

  return 0;
}
