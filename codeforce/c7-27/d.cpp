#include <cmath>
#include <iostream>

#define ll long long

using namespace std;

const int N = 2e5 + 10;
ll s[N];
ll dp[4][N];

int main() {
  ll t;
  cin >> t;
  for (ll i = 0; i < t; i++) {
    cin >> s[i];
  }

  dp[0][0] = 1;
  dp[1][0] = 1;
  dp[2][0] = 1;

  for (int i = 1; i < t; i++) {
    if (s[i] == 2) {
      dp[1][i] = dp[0][i - 1];
    } else if (s[i] == 0) {
      dp[0][i] = dp[0][i - 1] + 1;
    }
    // if(s[i-1] )
  }

  return 0;
}
