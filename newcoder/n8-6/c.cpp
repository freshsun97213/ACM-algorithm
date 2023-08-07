#include <cmath>
#include <iostream>
#define ll long long
#define de(x) cerr << #x << " " << x << endl;
using namespace std;

// abs((x!-1) * y - n);
// n - (x!-1) * y;
// x!的数值是固定的，可以预处理一下
//
//
// 另外一个思路是拆解 n的最长连续因子数;
const int N = 1e5 + 10;
int x1[N];

int main() {
  ll n;
  cin >> n;
  int sum = 1;
  // x1[1] = 0;

  for (int i = 1; i <= 12; sum *= i) {
    x1[i] = sum - 1;
    i++;
  }

  int mx = n, x = 0, y = 0;
  for (int i = 3; i < 12; i++) {
    int yy = (int)(n / x1[i]);
    // de(y);
    if (abs(n - x1[i] * yy) < mx && yy != 2) {
      x = i;
      // y = (int)(n / x1[i]);
      mx = abs(n - x1[i] * yy);
      y = yy;
      // de(mx);
    }
    yy++;
    if (abs(n - x1[i] * yy) < mx && yy != 2) {
      x = i;
      mx = abs(n - x1[i] * yy);
      y = yy;
      // de(mx);
    }
  }
  if (x == 0 && y == 0) {
    x = 1;
    y = 1;
  }
  cout << x << " " << y << endl;

  return 0;
}

// 不能够用 ll去做模除
