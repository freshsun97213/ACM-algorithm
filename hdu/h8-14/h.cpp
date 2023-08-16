#include <iostream>

using namespace std;
const int N = 1e4 + 10;
struct p {
  int v, w;
} p[N];

int dp[N][N];

int mian() {
  int t;
  cin >> t;
  while (t--) {
    int n, v;
    cin >> n >> v;
    for (int i = 0; i < n; i++) {
      cin >> p[i].v;
    }
    for (int i = 0; i < n; i++) {
      cin >> p[i].w;
    }
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= v; i++) {
        dp[i][j] += max(dp[i][j], dp[j][]);
      }
    }
  }

  return 0;
}
