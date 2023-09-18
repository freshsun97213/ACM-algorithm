#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
using namespace std;
const int N = 1e5 + 10;

using PII = pair<int, int>;

int a[N], b[N], n;

void popo(int l, int r) {
  for (int i = l; i < r; i++) {
    for (int j = r; j > i; j--) {
      if (a[j - 1] > a[j]) {
        swap(a[j], a[j - 1]);
      }
    }
  }
}

int check() {
  for (int i = 1; i <= n; i++) {
    if (a[i] != b[i]) {
      return 1;
    }
  }
  return 0;
}
int main() {
  int k;
  cin >> n >> k;
  map<int, int> mp;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b + 1, b + n + 1);
  // for (int i = 0; i <= n; i++) {
  //   cout << b[i] << endl;
  // }
  //
  // for (int i = 1; i <= n; i++) {
  //   cout << a[i];
  // }
  // cout << endl;
  // return 0;
  int ans = 0;
  if (k == n) {
    cout << 1 << endl;
    return 0;
  }

  while (check()) {
    for (int i = 1; i <= n - k + 1; i++) {
      popo(i, i + k - 1);
      // for (int j = i; j <= i + k - 2; j++) {
      //   for (int p = j; p <= i+ k - 2; p++) {
      //     if (a[j + 1] <= a[j]) {
      //       swap(a[j], a[j + 1]);
      //     }
      //   }
      // }
    }
    // for (int i = 0; i <= n; i++) {
    //   cout << a[i];
    // }
    // cout << endl;
    // 为什么sort 出不去
    // for (int i = 0; i < n - k; i++) {
    //   sort(a + i, a + i + k - 1);
    // }
    ans++;
  }

  cout << ans;
  return 0;
}
