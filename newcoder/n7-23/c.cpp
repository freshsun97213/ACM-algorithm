#include <algorithm>
#include <iostream>
#include <map>

#define ll long long

using namespace std;

// int a[N];

int main() {
  map<ll, ll> mp;
  ll n, k, ans = 0, aa;
  cin >> n >> k;
  for (ll i = 0; i < n; i++) {
    cin >> aa;
    mp[aa] = 1;
    ans += aa;
  }
  ll sum = 0, nemx = 0;
  map<ll, ll>::iterator ni;
  while (k--) {
    ll op, one;
    cin >> op >> one;
    if (op == 2) {
      one = -one;
    }
    sum += one;
    if (nemx > sum) {
      nemx = min(nemx, sum);
      ll pomx = nemx;
      ni = mp.lower_bound(pomx);
    }
  }

  for (auto &x : mp) {
  }

  ans += (n - ni->first * sum - ni->first * nemx);
  cout << ans << endl;

  return 0;
}

/*
 * 1 2 3 3 4 4 54       -10
 * -9 -8 -7 -7 -6 -6 44    所以只要找到过程中最大的 负数的值，然后标记好下标
 *  在最后进行乘以 这个下表数 一个是 mx  一个  是 从头到尾巴的
 *  0  0  0  0  0  0 44 + 10
 * 10 10 10 10 10 10 54  sum = 0;
 *
 * */
