#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

#define de(x) cerr << #x << " " << x << endl;

using namespace std;
vector<int> as;
const int N = 1e3 + 10;
int dp[N][N];

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b, k;
    memset(dp, -1, sizeof(dp));
    cin >> n >> a >> b >> k;
    for (int i = 1; i <= n; i++) {
      cin >> dp[i][0];
    }
    for (int p = 1; p <= 2 * k; p++) {
      for (int i = 1; i <= n; i++) {
        int x = 0;
        int j = max(0, i - b);
        for (; j <= i - a && j >= 0; j++) {
          if (dp[j][p - 1] != -1)
            dp[j][p] = max(dp[i][p], dp[j][p - 1] + dp[i][0]);
        }
      }
    }
    int mx = 0;
    for (int i = 1; i <= k; i++) {
      for (int j = 0; j < n; j++) {
        mx = max(mx, dp[j][i]);
      }
    }

    cout << mx << endl;
  }

  return 0;
}
