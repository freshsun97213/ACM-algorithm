#include <algorithm>
#include <cmath>
#include <iostream>
#define debug(x) cerr << #x << " " << x << endl;
#define ll long long

using namespace std;

const int N = 1e6 + 20;
int n, m;
ll money[N];

/*如果这题目 去用dp去写的 话
 * 我该怎么办
 */

int check(ll x) {
  int cnt = 1;
  // ll sum = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      if (money[j] - money[i - 1] >=
          x) { // 这份大于等于  和 没有等于号的区别在什么地方呢
        //
        cnt++;
        if (cnt > m) {
          // debug(cnt);
          return 1;
        }
        i = j - 1;
        break;
      }
      if (j == n) {
        return 0;
      }
    }
  }
  if (cnt > m) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  // int n,m;
  ll sum = 0, mmax = 0;

  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> money[i];
    mmax = max(mmax, money[i]);
    money[i] += money[i - 1];
  }
  // debug(mmax);
  ll r = money[n], l = mmax;

  while (r > l) {
    int mid = (l + r + 1) /
              2; // 只有在有小数情况下，才可以进行，mid = l+（r-l）/2的情况
    // 在整数里面不可以用，会导致一直循环一个值的情况;
    // 就是当 r - l = 1的时候 如果后面的l和r 都是= mid 的话在，那这个就会死循环
    //
    //
    // debug(mid);
    if (check(mid)) {

      l = mid;
      // debug(l);
    } else {
      r = mid - 1;
      // debug(r);
    }
  }
  cout << r << endl;

  return 0;
}
