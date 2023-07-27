#include <cstring>
#include <iostream>

#define debug(x) cerr << #x << " " << x << " ";
#define ll long long
#define rep(i, n) for (int k = i; k <= n; k++)

using namespace std;
const int N = 1e6 + 10;

int ans[N];

int main() {
  ll n;
  // ans = {0};
  while (cin >> n) {
    // int ans[N] = {0};
    for (int i = 1; i <= n; i++) {
      ans[i] = 0;
    }

    // memset(ans, 0, sizeof(int) * N);
    for (int i = 1; i <= n; i++) {
      ll a, b;
      cin >> a >> b;
      ans[a] += 1;
      ans[b + 1] -= 1;
      // debug(ans[a]);
      // debug(a);
      // debug(ans[b + 1]);
      // debug(b);
    }

    // rep(1, n) { debug(ans[k]); }

    for (int i = 1; i <= n; i++) {

      ans[i] = ans[i] + ans[i - 1];
      // debug(i);
      // debug(ans[i]);
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
 *  1 1
 *  1 2
 *  1 3
 *  0 0 0 0
 *  0 1 -1 0
 *  0 2 -1 -1
 *  0 3 -1 -1 -1
 *
 *
 * */
