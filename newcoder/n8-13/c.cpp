// #include <cmath>
// #include <cstdio>
// #include <iostream>
// #define de(x) cerr << #x << " " << x << endl;
// using namespace std;
// int a, b, l, r;
// int main()
//   cin >> t;
//   while (t--) {
//     cin >> a >> b >> l >> r;
//
//     int x = b - a, ansmx;
//     int ansmi = ceil((x * 1.0) / r);
//     ansmx = x / l;
//     if (l * ansmi > x) {
//       puts("-1");
//       continue;
//     }
//     cout << ansmi << " " << ansmx << endl;
//   }
//   return 0;
// }

#include <cmath>
#include <iostream>
#define de(x) cerr << #x << " " << x << endl;
using namespace std;
int a, b, l, r;
int check() {
  int x = b - a;
  int i = ceil(x * 1.0 / r);
  // for (; l * i <= x; i++) {
  if (l * i > x) {
    return 0;
  }
  //}
  return 1;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> l >> r;
    if (a == b) {
      cout << "0 0" << endl;
    } else if (b < a || !check()) {
      cout << "-1" << endl;
    } else {
      int x = b - a, ansmx;
      int ansmi = (x + r - 1) / r;
      int ss = x % l;
      if (ss != 0)
        ansmx = ceil(x * 1.0 / l) - ceil(ss * 1.0 / l);
      else {
        ansmx = x / l;
      }
      cout << ansmi << " " << ansmx << endl;
    }
  }

  return 0;
}
