#include <algorithm>
#include <iostream>

#define ll long long
#define debug(x) cerr << #x << " " << x << " ";
using namespace std;
const int N = 1e6 + 10;
struct st {
  ll id, num;
  friend bool operator<(const st &a, const st &b) { return a.num < b.num; }

} a[N];

ll search(double x, ll l, ll r) {
  if (l >= r) {
    return l;
  }
  ll mid = (l + r + 1) / 2;
  if (a[mid].num > x) {
    r = mid - 1;
  } else {
    l = mid;
  }
  search(x, l, r);
}

int main() {
  ll n;
  cin >> n;
  ll sum = 0;
  for (ll i = 1; i <= n; i++) {
    cin >> a[i].num;
    sum += a[i].num;
    a[i].id = i;
  }

  sort(a + 1, a + n + 1);
  //  for (int i = 0; i < n; i++) {
  //  debug(a[i].num);
  //}
  // cout << endl;
  // ll nub = 0;
  ll l = 1, r = n;
  while (l < r) {
    double nub = (sum * 1.0 / (r - l + 1));
    // double nub = (a[l].num + a[r].num) / 2
    debug(nub);
    ll ln = search(nub, l, r);
    debug(ln);
    if (nub - a[ln].num < 1e-16) {
      ln--;
    }
    ln = ln - l + 1;
    ll rr = r - l + 1 - ln;
    debug(ln);
    // cout << endl;
    if (rr <= ln) {
      sum -= a[r].num;
      r--;

    } else if (rr > ln) {
      sum -= a[l++].num;
    }
  }
  debug(l);
  cout << a[l].id << endl;
  // for(ll i = 0;i < n;i ++){

  //}

  // ll r = n,l = 0;
  // whlie(l < r){

  //}

  return 0;
}
