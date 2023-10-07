#include <iostream>

using namespace std;

// 通过调和极数的性质，用欧拉推导来近似求解

int main() { return 0; }

// 暴力模拟的方式
//  #include <climits>
//  #include <iostream>
//
//  using namespace std;
//
//  int main() {
//    int n;
//    cin >> n;
//    double s = 0.0;
//    for (double i = 1; i < INT_MAX; i++) {
//      s += 1 / i;
//      if (s > n) {
//        cout << i;
//        break;
//      }
//    }
//
//    return 0;
//  }
