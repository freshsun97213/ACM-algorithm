#include <cstddef>
#include <iostream>
#define lf double
#define pi 3.14159265358
#define debug(x) cerr << #x << " " << x << endl;

const lf esp = 1e-4;
// eps = 1e-3
const int N = 1e6 + 10;
using namespace std;
int n, f;
lf a[N];

int check(lf mid) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (int)(a[i] / mid);
  }
  if (sum >= (f + 1)) {
    return 0;
  }
  return 1;
}

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    lf radii, sum = 0, ans = 0;
    cin >> n >> f;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i] * a[i] * pi;
      a[i] = a[i] * a[i] * pi;
    }
    // debug(sum);
    lf r = sum, l = 0.0;
    // for (int i = 0; i < 100; i++) { // 成功的解决了负数问题 while(r - l <
    // eps)  真心OS ： 有精度要求的题目一定不要 用for循环 真的服气
    while (r - l > esp) {
      lf mid = l + (r - l) / 2;
      // debug(mid);
      if (check(mid)) {
        r = mid;
      } else {
        l = mid;
      }
    }
    ans = l;

    printf("%.04lf\n", ans);
  }

  return 0;
}
