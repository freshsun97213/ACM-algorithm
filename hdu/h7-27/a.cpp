
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int n, m, res[200005];
struct soldier {
  int id, l, r;
} s[400005];
int cmp(soldier a, soldier b) { return a.l < b.l; }

int go[400005][20];

void search(int k) {
  int lmt = s[k].l + m, ans = 1, p = k;
  for (int i = 19; i >= 0; i--) {
    if (go[k][i] != 0 && s[go[k][i]].r < lmt) {
      ans += (1 << i);
      k = go[k][i];
    }
  }
  res[s[p].id] = ans + 1;
}
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> s[i].l >> s[i].r;
    if (s[i].r < s[i].l)
      s[i].r += m;
    s[i].id = i;
  }
  sort(s + 1, s + 1 + n, cmp);
  for (int i = 1; i <= n; i++) {
    s[i + n] = s[i];
    s[i + n].l = s[i].l + m;
    s[i + n].r = s[i].r + m;
  }
  for (int i = 1, p = i; i <= 2 * n; i++) {
    while (p <= 2 * n && s[p].l <= s[i].r)
      p++;
    int pos = p - 1;
    go[i][0] = pos;
  }
  for (int i = 1; i < 20; i++) {
    for (int j = 1; j <= 2 * n; j++) {
      go[j][i] = go[go[j][i - 1]][i - 1];
    }
  }
  for (int i = 1; i <= n; i++) {

    int lmt = s[i].l + m, ans = 1, p = i;
    for (int j = 19; j >= 0; j--) {
      if (go[p][j] != 0 && s[go[p][j]].r < lmt) {
        ans += (1 << j);
        p = go[p][j];
      }
    }
    res[s[i].id] = ans + 1;
  }
  for (int i = 1; i <= n; i++)
    cout << res[i] << " ";
  return 0;
}

// #define debug(x) cerr << #x << " " << x << endl;
// #define de(x) cerr << x << " ";
// //#define ll long long
// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #define ll long long
// ll n, m;
// using namespace std;
// const int N = 1e5 + 10;
//
// int f[2 * N][20];
// struct solider {
//   ll l, r, id;
//   inline friend bool operator<(const solider &a, const solider &b) {
//     return a.l < b.l;
//   }
//
// } s[2 * N];
//
// /* 隐含条件（包含），也就是说不可能存在两个相同的区间，并且不会存在
//  * 类似  1,3  和1,4 这样的区间，只会存在 1,3 和 2,4的情况，
//  * 这样我们可一用贪心去写的话，可以找到 最优的解集;
//  *
//  *
//  *
//  *
//  *
//  * */
// ll ans[N];
//
// void search(ll k) {
//   ll lim = s[k-1].l + m, p = k, asn = 0;
//   for (int i = 20; i >= 0; i++) {
//     // for(int j ;j < ;j ){
//     if (!f[p][i] && lim > s[p].r) {
//       asn += 1 << i;
//     }
//     //}
//   }
//   ans[s[k].id] = asn;
// }
//
// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(0);
//   cin >> n >> m;
//   for (int i = 1; i <= n; i++) {
//     cin >> s[i].l >> s[i].r;
//     s[i].id = i + 1;
//   }
//   sort(s, s + n );
//   // pre()
//   for (int i = 1; i <= n; i++) {
//     s[n + i] = s[i];
//     s[n + i].l = s[i].l + m;
//     s[n + i].r = s[i].r + m;
//   }
//   // 先把第一次的所有数组全部罗列出来，也就是他们的下一个接力的战士是多少号
//   for (int i = 1; i <= n; i++) {
//     int j = i;
//     while (s[j].l < s[i].r && j <= 2 * n) {j++;}
//     j--;
//     f[i][0] = j;
//   }
//   // 注释：这里的log2（m） 是可以做优化的，也对于log2（m） 进行个ing预处理
//   // 将其存放在其中。
//   // 因为log2函数的时间复杂度实在是太大了。
//   for (int i = 1; i <= log2(m); i++) {
//     for (int j = 0; j < m; j++) {
//       f[j][i] = f[f[j - 1][i - 1]][i - 1];
//     }
//   }
//   ll ans = 0;
//   for(int i = 1;i <= n;i ++){ search(i);}
//
//   for(int i = 1;i <= n;i ++){
// //int a = ans[i];
//  //   cout << ans[i] << " ";}
//   /*
//   for (int j = 0; j < n; j++) {
//     int now = j;
//     for (int i = 20; i >= 0; i--) {
//       // ans = 1 << ans;
//       if (f[now][i] != 0 && s[f[now][i]].r < s[j].l + m) {
//         ans = (1 << ans) + 1;
//         now = f[now][i];
//       }
//     }
//     cout << ans << " ";
//   }
//   */
//   return 0;
// }
