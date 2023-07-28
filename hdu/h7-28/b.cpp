#include <cmath>
#include <iostream>

#define ll long long

using namespace std;

const int N = 1e3 + 10;
ll a[N][N];

ll mypow(int n) {
  ll s = 1;
  for (int i = 0; i < n; i++) {
    s *= 3;
  }
  return s;
}

void p(ll n, ll x, ll y) {
  if (n == 0) {
    a[x][y] = 1;
    return;
  }

  ll s = mypow(n - 1);
  p(n - 1, x - s, y + s); // 左上
  p(n - 1, x + s, y + s); // 右上
  p(n - 1, x, y);         // 中间
  p(n - 1, x - s, y - s); // 左下
  p(n - 1, x + s, y - s); // 右下
}

int main() {

  ll n;
  while (cin >> n) {
    if (n == -1) {
      return 0;
    }
    p(n - 1, 1 + mypow(n - 1), 1 + mypow(n - 1));

    for (ll i = 1; i <= mypow(n - 1); i++) {
      for (ll j = 1; j <= mypow(n - 1); j++) {
        if (a[i][j]) {
          printf("X");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    printf("-");
  }
  return 0;
}
