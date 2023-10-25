#include <climits>
#include <iostream>
#include <vector>

#define i64 long long
#define vl vector<i64>
#define f frist
#define s second

using namespace std;
const int N = 1e5 + 10;
i64 dp[2][N]; // 0代表没选  1 代表选了的;
using PII = pair<i64, i64>;

int main() {
  i64 n;
  cin >> n;

  vector<vector<PII>> e(n + 1);
  for (int i = 0; i < n; i++) {
    i64 u, v, w;
    cin >> u >> v >> w;
    e[u].push_back({v, w});
    e[v].push_back({u, w});
  }

  return 0;
}
