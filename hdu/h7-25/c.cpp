#include <algorithm>
#include <ctime>
#include <iostream>

#define debug(x) cerr << #x << " " << x << endl;
#define ll long long

using namespace std;

const int N = 1e7 + 10;
ll r, n, m;

int dis[N];

int check(ll x) {
  int cnt = 0;
  ll s = 0;
  for (int i = 1; i <= n + 1; i++) {
    // debug(i);

    if (x > dis[i] - s) {
      // debug(dis[j] - dis[i]);
      cnt++;
      // debug(cnt);
    } else {
      s = dis[i];
      // debug(i);
      // if (cnt > m) {
      // return 1;
      //}
    }
    // if (cnt > m) {
    // return 1;
    //}
  }
  if (cnt > m) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> r >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> dis[i];
  }
  ll l = 1;
  sort(dis, dis + n + 1);
  dis[n + 1] = r;

  while (l < r) {
    ll mid = (l + r + 1) / 2;
    // debug(mid);
    //  break;
    if (check(mid)) {
      r = mid - 1;
    } else {
      l = mid;
    }
    // break;
  }

  cout << l << endl;

  return 0;

  cerr << clock() * 1000 / CLOCKS_PER_SEC << "MS" << endl;
}

/* 不能够用爽排序去直接的出答案的原因是  在一定的程度上 将一个点移出去只后
 * 有可能该点身边的两个点的和依旧是最小的，但是我开的双排序
 *会导致 算法认为这个东西的权值直接会变成最大的情况。
 * */
// int main() {
//   cin >> r >> n >> m;
//
//   for (int i = 1; i <= n; i++) {
//     cin >> dis[i];
//   }
//   dis[n + 1] = r;
//   /*有序*/
//   sort(dis, dis + n + 1);
//   /*将其数列变成有序*/
//   for (int i = n + 1; i > 0; i--) {
//     ans[i] = dis[i] - dis[i - 1];
//   }
//   // while(l < r){
//   // }
//   //
//   //
//   sort(ans, ans + n);
//   cout << ans[m + 2] << endl;
//   for (int i = 0; i <= n + 1; i++) {
//     debug(ans[i]);
//   }
//   cerr << clock() * 1000 / CLOCKS_PER_SEC << "MS" << endl;
//   return 0;
// }
//
