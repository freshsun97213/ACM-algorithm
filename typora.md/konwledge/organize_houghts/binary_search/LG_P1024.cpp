#include <climits>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>

#define dd double
#define i64 long long
#define vi vector<i64>
#define endl '/n'
#define eps (1e-4);

using namespace std;
dd a, b, c, d;

/*   盛金公式   */
// ax^3 + bx^2 + cx + d = 0;
// A = b^2 -3ac
// B = bc-9ad
// C = c^2 -3bd
// 这是判别式，判断 是否是重根
// deta = B^2 - 4AC;
// 特殊情况 A == B x1 = x2 = x3 = - b/3a = -c/b = -3d/c;

// deta > 0
//

int mian() { return 0; }

/*普通实数 二分 ，配上凹凸函数及其单调性 判断二分方向*/
// dd f(dd X) { return a * X * X * X + b * X * X + c * X + d; }
//
// int main() {
//   cin >> a >> b >> c >> d;
//
//   for (dd i = -100.00; i <= 100; i += 1) {
//     dd x1 = i, x2 = i + 1 - 0.001;
//
//     if (abs(f(x1)) <= 0.01) {
//       printf("%.02lf ", x1);
//       continue;
//     }
//     if (f(x1) * f(x2) < 0) {
//       while (x2 - x1 >= 0.001) {
//         dd mid = x1 + (x2 - x1) / 2;
//         if (f(x1) * f(mid) <= 0) {
//           x2 = mid;
//         } else {
//           x1 = mid;
//         }
//       }
//       if (f(x1) <= 0.01 && f(x1) >= -0.01)
//         printf("%.02lf ", x1);
//     }
//   }
//
//   return 0;
// }

//
// dd a, b, c, d;
// int check(dd x, dd r) {
//   if ((a * x * x * x + b * x * x + c * x + d) *
//           (a * r * r * r + b * r * r + c * r + d) <=
//       0) {
//     return 1;
//   } else {
//     return 0;
//   }
// }
//
// int main() {
//   cin >> a >> b >> c >> d;
//
//   for (dd i = -100.00; i < 100.00; i += 1.0) {
//     dd l = i, r = i + 1.0;
//     while (abs(r - l) > 0.001) {
//       dd mid = l + ((r - l) / 2);
//       if (check(mid, r)) {
//         l = mid;
//       } else {
//         r = mid;
//       }
//     }
//     if (a * r * r * r + b * r * r + c * r + d <= 0.001 &&
//         a * r * r * r + b * r * r + c * r + d >= -0.001) {
//       printf("%.02lf ", r);
//     }
//   }
//   return 0;
// }
