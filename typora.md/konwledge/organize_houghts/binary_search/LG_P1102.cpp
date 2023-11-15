#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>

#define f first
#define s second
#define i64 long long
#define vi vector<i64>

using namespace std;
/*https://www.luogu.com.cn/problem/P1102*/
/* lower_bound & upper_bound  STL 二分  at algorithm*/
const int N = 2e5 + 10;
i64 a[N];

int main() {
  i64 n, c;
  cin >> n >> c;
  // vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // 如果lower_bound 用vector的end（）等，返回值将会是指针
  // 而用普通数组，其返回的就是普通的数值
  sort(a, a + n);
  i64 sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (upper_bound(a, a + n, a[i] + c)) - lower_bound(a, a + n, a[i] + c);
  }

  cout << sum << endl;

  return 0;
}

/*  朴素二分   */

// int main() {
//   i64 n, c;
//   cin >> n >> c;
//
//   vi b(n);
//   for (int i = 0; i < n; i++) {
//     cin >> b[i];
//   }
//
//   sort(b.begin(), b.end());
//   i64 sum = 0;
//   int r = 0, l = 0;
//   for (int i = 0; i < n; i++) {
//     while (l < n && b[l] - b[i] < c) {
//       l++;
//     }
//     while (r < n && b[r] - b[i] <= c) {
//       r++;
//     }
//     sum += (r - l);
//   }
//   cout << sum << endl;
//
//   return 0;
// }

// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(0);
//   i64 n, c;
//   cin >> n >> c;
//   vi a(n);
//   map<i64, i64> mp;
//   i64 ma = LLONG_MIN;
//   for (i64 i = 0; i < n; i++) {
//     cin >> a[i];
//     mp[a[i]]++;
//     ma = max(a[i], ma);
//   }
//   i64 sum = 0;
//
//   // 如果该变量 原本在mp中不存在的话，会被新增;
//   // 这样会增加时间复杂度。
//   for (auto x : mp) {
//     sum += x.second * mp[c + x.f];
//     if (x.f + c >= ma) {
//       break;
//     }
//   }
//   // sort(a.begin(),a.end());
//
//   cout << sum << endl;
//
//   return 0;
// }
