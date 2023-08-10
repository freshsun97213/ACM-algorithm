#include <algorithm>
#include <cstring>
#include <iostream>
#define int long long
using namespace std;
int n;
const int N = 1e6 + 10;
int tree[N];
// struct Ss {
//   int id, value;
//   friend bool operator<(const Ss &a, const Ss &b) {
//     if (a.value != b.value)
//       return a.value < b.value;
//     return a.id < b.id; // 少加了排序？？？
//     // sort 不应该是 id原本就是在前面的吗，为什么还是
//     // 会导致 这个id的顺序会改变。
//   }
// } S[N];
inline int lowbit(int x) { return x & (-x); }
void update(int x) {
  for (; x <= n; x += lowbit(x)) {
    ++tree[x];
  }
}
int sum(int x) {
  int res = 0;
  for (; x; x -= lowbit(x))
    res += tree[x];
  return res;
}

signed main() {
  cin >> n;
  int ans = 0;
  int ra;
  for (int i = 1; i <= n; i++) {
    cin >> ra;
    update(ra);
    ans += sum(n) - sum(ra);
    // S[i].id = i;
  }
  // for (int i = 1; i <n; i++) {
  //   cout << tree[i] << " ";
  // }

  cout << ans << endl;

  return 0;
}
// #include <cstring>
// #include <iostream>
// #define int long long
// using namespace std;
//
// const int N = 1e6 + 10;
// int tree[N], ra[N];
// struct Ss {
//   int id, value;
//   friend bool operator<(const Ss &a, const Ss &b) {
//     if (a.value != b.value)
//       return a.value < b.value;
//     return a.id < b.id; // 少加了排序？？？
//     // sort 不应该是 id原本就是在前面的吗，为什么还是
//     // 会导致 这个id的顺序会改变。
//   }
// } S[N];
// inline int lowbit(int x) { return x & (-x); }
// void update(int x) {
//   for (; x < N; x += lowbit(x)) {
//     ++tree[x];
//   }
// }
// int sum(int x) {
//   int res = 0;
//   for (; x; x -= lowbit(x))
//     res += tree[x];
//   return res;
// }
//
// signed main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     cin >> S[i].value;
//     S[i].id = i;
//   }
//   memset(tree, 0, sizeof(tree));
//   sort(S, S + n + 1);
//   for (int i = 1; i <= n; i++) {
//     ra[S[i].id] = i;
//   }
//   int ans = 0;
//   for (int i = n; i > 0; i--) {
//     // update(ra[i]);
//     ans += sum(ra[i]);
//     update(ra[i]);
//   }
//   cout << ans << endl;
//
//   return 0;
// }
