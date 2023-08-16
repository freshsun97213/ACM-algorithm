#include <iostream>
#include <stack>

using namespace std;
const int N = 1e6 + 10;
int a[N];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  stack<int> q[n];
  int bk = 0;
  for (int i = n - 1; i >= 0; i--) {
    q[a[i]].push(i);
  }

  return 0;
}

// #include <iostream>
// #include <map>
// #include <utility>
// #include <vector>
// #define ll long long
//
// using namespace std;
// const int N = 1e6 + 10;
// map<int, int> mp;
// vector<pair<int, int>> a;
// ll nn[N];
// // void init(){
// //   a[0] = 1;
// //   for(int i = 1;i <= 20;i ++){
// //     a[i] *= i;
// //   }
// // }
// int main() {
//   int n;
//   cin >> n;
//   int f = 0, pre1 = 0;
//   int cnt = 0;
//   a.push_back({1, 0});
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     if (x == 1) {
//       mp[1]++;
//     }
//     if (x == a[cnt].first) {
//       a[cnt].second++;
//     } else {
//       a[++cnt].second++;
//       a[cnt].first = x;
//     }
//   }
//   int sum = 0, sm1 = 0, s1 = 0;
//   pair<int, int> mx;
//   for (int i = 0; i < n; i++) {
//     if (a[i].first == 1) {
//       s1 += a[i].second - 1;
//       if (!f) {
//         pre1 += a[i].second;
//         f = 1;
//       }
//       if (mx.first == 1)
//         mx.second = mx.second + a[i].second;
//     } else if (a[i].first != 1) {
//       sm1 += a[i].second;
//     } else {
//       sum += sm1 * s1;
//     }
//   }
//   cout << sum + mp[1] << endl;
//   return 0;
// }
