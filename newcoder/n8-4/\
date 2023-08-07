// 他们的隐形思维方式
//
// 他们将题目进行了拆解，如果我单独去看一个贪心的题目的话
// 我是可以解这些个解的，但是一旦有了其他的问题掺杂进去的话
// 我就会有点莫不找头脑
//
// 那么把这题目进行肢解吧
//
// 首先读题目错误
// 误以为B数组是在A数组里面提取出来的，从群众来，再到群众中去
// B数组是随便取出来的数字，//所以当时的小潘才说，那可以用切分的方法
// 我当时都懵了
//
// 肢解：
//
// 取一个区间，而这个区间里面，可以产生k-1个数组，然后这个数组里面
// 回到A数组的左右下标里面 ，求解 在这个区间里面 所有的小区间是否有
// 解使得 区间的求和全部是2的倍数
//
//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define de(x) cerr << #x << " " << x << endl;
#define dex(x) cerr << #x << " " << x;
using i64 = long long;

void solve() {
  int n, q;
  std::cin >> n >> q;

  std::vector<int> s(n + 1);
  for (int i = 0; i < n; i++) {
    i64 a;
    std::cin >> a;
    s[i + 1] = s[i] ^ (a % 2); // 太妙了，通过异或来进行前缀和
    // 表示的是前i个数字里面，奇数个奇数则出1，偶数个一则出0
    // 而本题目区间内有偶数个奇数 就 可以有解;
    //  用于求奇数和偶数
    //  dex(i + 1);
    de(s[i + 1]);
  }

  std::vector<std::array<int, 2>> sum(n + 1);

  // 相当于 int sum[n+1][2]
  // 这里是为了，将异或之后的值进行相应的
  // 整理，前i个数字里面，到底有多少个1 和多少个0;

  for (int i = 0; i <= n; i++) {
    if (i) {
      sum[i] = sum[i - 1]; // vector可以进行将容器
      // array塞在里面，然后这样子可以得到可以表示三种不同的状态和值
      //
      // dex(i);
      // de(sum[i][1]);
      // de(sum[i][0]);
    }
    sum[i][s[i]]++;
  }
  // 001001
  // 0 0
  // 1 0
  // 2 0
  // 2 1
  // 3 1
  // 4 1
  // 4 2
  while (q--) {
    int l, r, k;
    std::cin >> l >> r >> k;
    l--;
    // s[l] 和 s[r] l是1代表前面有的奇数个奇数
    // l 是 0的话 代表前面 有偶数个奇数
    // s数组 L R相等的话则代表区间里面的奇数是偶数个
    // sum数组所做到的则是将区间进行拆分，这种
    // 拆分指的是 ，在这些个区间里面到底能够有
    // 多少个 偶数个奇数的区间 ,这个区间就刚刚好是
    // 奇数加  前一个奇数 的 个数
    // 偶数加  前一个偶数 的 个数  而这里全部通过异或运算符号
    // 从而产生了相应的 个数
    de(sum[r][s[r]]);
    de(sum[l][s[l]]);
    if (s[l] == s[r] && sum[r][s[r]] - sum[l][s[l]] >= k) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}

// 线段树解法

// #include <iostream>
// #include <vector>
// #define ll long long
//
// using namespace std;
// const int N = 1e5 + 10;
// ll a[N], d[100][N], mod2[100][N], n, q;
//
// void build(int s, int t, int p, int x) {
//   if (s == t) {
//     d[x][p] = a[s];
//     if (a[s] % 2 == 0) {
//       mod2[x][p] = 1;
//     }
//     return;
//   }
//   ll m = s + ((t - s) >> 1);
//
//   build(s, m, p * 2, x);
//   d[x][p] = d[x][p * 2] + d[x][p * 2 + 1];
//   if (mod2[x][p * 2] && mod2[x][p * 2 + 1]) {
//     mod2[x][p] = 1;
//   }
//   // 左右子树的前缀和;
// }
//
// bool getsum(int l, int r, int s, int t, int p, int x) {
//   if (l <= s && t <= r)
//     return d[x][p];
//
//   int m = s + ((t - s) >> 1);
//   int sum = 0;
//   if (l <= m) {
//     sum += getsum(l, r, s, m, p * 2, x);
//   }
//   if (r > m) {
//     sum += getsum(l, r, s, m, p * 2 + 1, x);
//   }
//   return sum;
// }
//
// int main() {
//   ll t;
//   cin >> t;
//   while (t--) {
//     cin >> n >> q;
//     int cnt = 0, tail = 0, x = 1;
//     for (int i = 1; i <= n; i++) {
//       cin >> a[i];
//       if (a[i] > a[i - 1]) {
//         tail++;
//       } else if (a[i] <= a[i - 1] || i == n) {
//         build(x, i, 1, cnt);
//         cnt++;
//         x = i;
//       }
//     }
//     // build(1,n,1);
//
//     for (int i = 1; i <= q; i++) {
//       ll l, r, k;
//       cin >> l >> r >> k;
//       // if(l - r < k-1){cout << "NO" << endl;}
//       int f = 0;
//       for (int i = 1; i <= k; i++) {
//         if (getsum(l, r, ))
//       }
//     }
//   }
//   return 0;
// }
