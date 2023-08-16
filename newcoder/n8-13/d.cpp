// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int sum[35][35], n, k, x;
// ll ans;
// int main() {
//   std::ios::sync_with_stdio(false);
//   cin >> n >> k;
//   for (int i = 1; i <= n; i++) {
//     cin >> x;
//     int tot1 = 0, tot2 = 0;
//     while (x % 2 == 0)
//       tot1++, x /= 2;
//     while (x % 5 == 0)
//       tot2++, x /= 5;
//     for (int a = 0; a <= 31; a++)
//       for (int b = 0; b <= 31; b++)
//         if (tot1 + a >= k && tot2 + b >= k)
//           ans += sum[a][b];
//     sum[tot1][tot2]++;
//   }
//   cout << ans;
//   return 0;
// }

#include <iostream>

using namespace std;
const int N = 1e5 + 10;
int sum[35][35];
int main() {
  int n, x;
  cin >> n >> x;
  if (x >= 18) {
    cout << '0' << endl;
  }
  int asn = 0;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    int tot5 = 0, tot2 = 0;
    while (k % 2 == 0) {
      tot2++;
      k = k / 2;
    }
    while (k % 5 == 0) {
      tot5++;
      k = k / 5;
    }
    // int asn = 0;
    for (int a = 0; a <= 31; a++) {
      for (int b = 0; b <= 31; b++) {
        if (tot5 + a >= x && tot2 + b >= x) {
          asn += sum[a][b];
        }
      }
    }
    sum[tot5][tot2]++;
  }
  //
  // for (int i = 0; i <= 31; i++) {
  //   for (int j = 0; j <= 31; j++) {
  //     cout << sum[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  cout << asn << endl;
  return 0;
}
