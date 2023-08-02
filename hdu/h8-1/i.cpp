
/*就过了？？？？？*/
// #include <algorithm>
// #include <cstdio>
// #include <iostream>
// int a[10001], b[10001], c[10001], n, m, s[10000001];
//
// int main() {
//   scanf("%d %d", &n, &m); // 读入n,m
//   for (int i = 1; i <= n; i++)
//     scanf("%d %d %d", &a[i], &b[i], &c[i]); // 读入3个参数
//   for (int i = 1; i <= n; i++)
//     for (int j = 1; j <= 100; j++)
//       s[j + (i - 1) * 100] = a[i] * j * j + b[i] * j + c[i]; // 计算
//   std::sort(s + 1, s + 1 + n * 100);                         // 快排
//   for (int i = 1; i <= m; i++)
//     printf("%d ", s[i]);
// }
//
// 这题目太离谱，用正常的解题方法会导致，这些内存超限
//

#include <algorithm>
#include <iostream>
#include <queue>
#define ll long long

using namespace std;

const int N = 1e6 + 10;
const int M = 1e4 + 10;
struct s {
  ll a, b, c;
} st[M];
ll aa[N];
ll add(ll i, ll x) { return st[i].a * x * x + st[i].b * x + st[i].c; }

// int a[N];

int main() {

  // priority_queue<int, vector<int>, less<int>> a;
  ll n, m;
  cin >> n >> m;

  for (ll i = 0; i < n; i++) {
    cin >> st[i].a >> st[i].b >> st[i].c;
  }

  for (ll i = 0; i < n; i++) {
    for (ll j = 1; j <= 100; j++) {
      aa[(i)*100 + j - 1] = add(i, j);
    }
  }
  sort(aa, aa + n * 100);
  // for (int i = 0; i < m; i++) {
  //   aa[i] = a.top();
  //   a.pop();
  // }

  for (ll i = 0; i < m; i++) {
    cout << aa[i] << " ";
  }

  return 0;
}
