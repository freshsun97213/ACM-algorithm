#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
#define ll long long
#define de(x) cerr << #x << " " << x << " ";
using namespace std;

const int N = 1e6;

//
// void s(){
//
//     ll sqr = sqrt(r), sql = sqrt(l);
//
//
//
//     for (ll i = 1; i <= sql; i++) {
//       if (l % i == 0) {
//         a.emplace_back(i);
//         a.emplace_back(l / i);
//       }
//     }
//     for (ll i = 1; i <= sqr; i++) {
//       if (r % i == 0) {
//         a.emplace_back(i);
//         a.emplace_back(r / i);
//       }
//     }
// 	return ;
// }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    vector<ll> a;
    // map<ll, ll> mp;
    ll n;
    cin >> n;
    ll sqn = sqrt(n);
    ll r = 0, cnt = 0, l = sqn;
    // de(sqn);
    while (n % l != 0) {
      l--;
    }
    r = n / l;

    ll sqr = sqrt(r), sql = sqrt(l);

    for (ll i = 1; i <= sql; i++) {
      if (l % i == 0) {
        a.emplace_back(i);
        a.emplace_back(l / i);
      }
    }
    for (ll i = 1; i <= sqr; i++) {
      if (r % i == 0) {
        a.emplace_back(i);
        a.emplace_back(r / i);
      }
    }

    // sort(a.begin(), a.end());

    ll len = a.size();
    for (ll i = len - 1; i >= 0; i--) {
      a.emplace_back(n / a[i]);
      // cout << a[i] << " ";
    }
    sort(a.begin(), a.end());
    cout << t << " " << endl;
    for (ll i = 0; i < a.size(); i++) {
      cout << a[i] << " "
           << "/"
           << " ";
    }

    sort(a.begin(), a.end());
    len = a.size();
    ll ans = 1, mx = 1;
    for (ll i = 1; i < len; i++) {
      if (a[i] - a[i - 1] == 1) {
        mx++;
      } else if (a[i] - a[i - 1] == 0) {

      } else {
        ans = max(ans, mx);
        mx = 1;
      }
    }
    cout << ans << endl;
  }
}
