#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y) {
      swap(x, y);
    }
    if ((x == 0 && (x == z || y == z)) || (y == 0 && (y == z || x == z))) {
      cout << "YES" << endl;
    } else if (x % 2 == 0 && y % 2 == 0 && z % 2 == 1) {
      cout << "NO" << endl;
    } else if (y % x == 0 && z % x != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}

// #include <cmath>
// #include <iostream>
//
// using namespace std;
// //
// // int gcd(int x, int y) {
// //   while (y % x != 0) {
// //     y = y % x;
// //     int t = y;
// //     y = x;
// //     x = t;
// //   }
// //   return x;
// // }
// inline int gcd(int a, int b) {
//   while (b ^= a ^= b ^= a %= b)
//     ;
//   return a;
// }
// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     int x, y, z;
//     cin >> x >> y >> z;
//     if (x > y) {
//       swap(x, y);
//     }
//     if (x == z || y == z || x == 0 && y == z || y == 0 && x == z) {
//       cout << "YES" << endl;
//       continue;
//     }
//     int s = gcd(x, y);
//     if (z % s == 0) {
//       cout << "YES" << endl;
//     } else {
//       cout << "NO" << endl;
//     }
//
//     //   if (x % 2 != y % 2) {
//     //     cout << "YES" << endl;
//     //   } else if (x % 2 == 0 && y % 2 == 0 && z % 2 == 1) {
//     //     cout << "NO" << endl;
//     //   } else if (y % x == 0 && z % x != 0) {
//     //     cout << "NO" << endl;
//     //   } else {
//     //     cout << "YES" << endl;
//     //   }
//   }
//
//   return 0;
// }
