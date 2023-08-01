#include <algorithm>
#include <cstring>
#include <iostream>
#define d(x) cerr << #x << " " << x;
#define de(x) cerr << #x << " " << x << " ";
#define debug(x) cerr << #x << " " << x << " " << endl;
#define ll long long
typedef struct {
  ll r, l;
} s;
using namespace std;
const int N = 1e5 + 10;
ll ans[N], cmpp[N];
ll sum[N], n;
s p[N];
bool cmp(const s &a, const s &b) {
  // return a.r * a.l < b.r * b.l;
  if (a.r != b.r) {
    return a.r < b.r;
  } else if (a.r == b.r) {
    return a.l < b.l;
  }
}
void dive(ll cnt, ll i) {
  memset(cmpp, 0, cnt * sizeof(cmpp[0]));
  int mod = 0;
  // for(int i = 1;i <= n;i ++){
  for (int j = cnt; j >= 0; j--) {
    cmpp[j] = (mod * 10000 + sum[j]) / p[i].r;
    // de(cmpp[j]);
    //  cout << endl;
    mod = sum[j] % p[i].r;
    // de(mod);
    // cout << endl;
  }
  //}
  int f = 0;
  for (int j = cnt; j >= 0; j--) {
    // debug(ans[j]);
    if (ans[j] < cmpp[j]) {
      f = 1;
      break;
    } else if (ans[j] > cmpp[j]) {
      break;
    } else if (ans[j] == cmpp[j]) {
      continue;
    }
  }

  if (f) {
    for (int j = cnt; j >= 0; j--) {
      // d(ans[j]);
      ans[j] = cmpp[j];
    }
  }
  // cout << endl;
}

int pplus(ll cnt, ll l) {
  ll add = 0;
  for (int i = 0; i < cnt; i++) {
    sum[i] *= p[l].l;
    // de(sum[i]);
    sum[i] += add;
    add = 0;
    if (sum[i] >= 10000) {
      add = sum[i] / 10000;
      // de(sum[i + 1]);
      sum[i] = sum[i] % 10000;
    }
  }
  sum[cnt] = sum[cnt] * p[l].l + add;
  // de(sum[cnt]);
  while (sum[cnt] >= 10000) {
    sum[cnt + 1] = sum[cnt] / 10000;
    // de(sum[cnt + 1]);
    sum[cnt] %= 10000;
    cnt++;
    // de(cnt);
  }
  return cnt;
}
int main() {

  cin >> n;
  for (int i = 0; i <= n; i++) {
    cin >> p[i].l >> p[i].r;
  }

  sort(p + 1, p + n + 1, cmp);
  ll cnt = 0;
  sum[0] = 1;
  for (ll i = 0; i <= n; i++) {
    if (i != 0)
      dive(cnt, i);
    cnt = pplus(cnt, i);
    // dive(cnt, i + 1);
    //  de(cmpp[0]);
    //  de(ans[0]);
  }
  // dive(cnt, n);
  //   de(ans[0]);
  int ff = 0;
  for (int i = cnt + 2; i >= 0; i--) {
    if (ff) {
      if (ans[i] <= 9) {
        cout << "000" << ans[i];
      } else if (ans[i] <= 99) {
        cout << "00" << ans[i];
      } else if (ans[i] <= 999) {
        cout << "0" << ans[i];
      } else {
        cout << ans[i];
      }
      // cout << "00000";
    } else if (ans[i] != 0) {
      cout << ans[i];
      ff = 1;
    }
  }
  // for (int i = 0; i <= n; i++) {
  //   de(p[i].l);
  //   de(p[i].r);
  //   de(cmpp[i]);
  //   cout << endl;
  // }

  // mx = max(mx, sum / p[i].r);
  // sum *= p[i].l;

  return 0;
}

// 排序 的 话 用a.r和 a.l的乘积与 b.r 和b.l的乘积来比较的话
// 和 先对   a.r b.r 进行排序 再对左边界 进行排序的话，答案
// 竟然都是一样的过，所以说明了，数据点有问题。

// #include <algorithm>
// #include <iostream>
// #define de(x) cerr << #x << " " << x << endl;
// #define ll long long
// using namespace std;
// typedef struct {
//   ll l, r;
// } st;
// const int N = 1e5 + 10;
// ll sum[N]; // 10000;
// bool cmp(const st &a, const st &b) {
//   // if (a.r != b.r) {
//   return a.r * a.l < b.r * b.l;
// }
// st p[N];
//
// int main() {
//   ll n;
//   cin >> n;
//   for (int i = 0; i <= n; i++) {
//     cin >> p[i].l >> p[i].r;
//   }
//   sort(p + 1, p + n + 1, cmp);
//
//   ll sum = p[0].l, mx = 0;
//
//   for (int i = 1; i < n; i++) {
//     // de(p[i].l);
//     mx = max(mx, sum / p[i].r);
//     sum *= p[i].l;
//     //void
//     // de(sum);
//   }
//
//   mx = max(mx, sum / p[n].r);
//
//   cout << mx << endl;
//
//   return 0;
// }
