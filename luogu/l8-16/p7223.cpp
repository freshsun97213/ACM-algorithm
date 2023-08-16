#include <iostream>

#define mod 998244353
using namespace std;

const int N = 1e3 + 10;
struct nod {
  int v, w;
} m[N];
int dp[N][N];

int main() {
  int ww, p;
  cin >> ww >> p;

  for (int i = 1; i <= p; i++) {
    cin >> m[i].v >> m[i].w;
  }

  for (int i = 1; i <= p; i++) {
    for (int j = 0; j < m[i].v; j++) {
      dp[i][j] = dp[i - 1][j];
    }
    for (int j = m[i].v; j <= ww; j++) {
      dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - m[i].v] + m[i].w);
    }
  }
  for (int i = 0; i <= p; i++) {
    for (int j = 0; j <= ww; j++) {
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }

  cout << dp[p][ww] << endl;

  return 0;
}
