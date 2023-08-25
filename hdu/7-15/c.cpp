#include <iostream>

#define ll long long
// error:题意理解问题，在于consecutive sequence的意思是连续的子序列
// 我把consecutive的意思直接省略了
// warning : product is plus乘积的意思
// 一旦涉及到乘积，我们就需要注意0这个点！！！

using namespace std;
const int N = 1e5 + 10;
ll a[N];
int main() {
  ll n, cnt = 1;
  while (cin >> n) {
    ll mx = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
      ll sum = 1;
      for (int j = i; j < n; j++) {
        sum *= a[j];
        mx = (sum > mx) ? sum : mx;
      }
    }
    cout << "Case #" << cnt++ << ": The maximum product is ";
    cout << mx;
    cout << "." << endl;
    cout << endl;
  }
  return 0;
}
