#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#define ll long long

using namespace std;

const int N = 1e6 + 10;
ll a[N];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  queue<pair<ll, ll>> qq[4];

  ll n, m, q, t;
  double u, v, p;
  cin >> n >> m >> q >> u >> v >> t;
  p = u / v;

  for (ll i = 0; i < n; i++) {

    cin >> a[i];
    // q1.push(a);
  }

  sort(a, a + n, greater<ll>());

  for (ll i = 0; i < n; i++) {
    pair<ll, ll> ss;
    ss.first = a[i];
    ss.second = 0;
    qq[1].push(ss);
  }

  for (ll i = 1; i <= m; i++) {
    // ll s = max(q1.front(),q2.front();
    ll s, j;
    if (qq[1].front().first > qq[2].front().first) {
      s = qq[1].front().first + (i - qq[3].front().second) * q;
      j = 1;
    } else {
      s = qq[2].front().first + (i - qq[3].front().second) * q;
      j = 2;
    }
    if (s > qq[3].front().first + (i - qq[3].front().second) * q) {
      s = qq[j].front().first + (i - qq[3].front().second) * q;
      ll x1 = p * s;
      ll x2 = s - (ll)p * s;
      pair<ll, ll> ss;
      ss.first = x1;
      ss.second = i;
      qq[2].push(ss);
      ss.first = x2;
      qq[3].push(ss);
    } else {
      s = qq[3].front().first + (i - qq[3].front().second) * q;
      // qq[3].pop();
      ll x1 = p * s;
      ll x2 = s - (ll)(p * s);
      pair<ll, ll> ss;
      ss.first = x1;
      ss.second = i;
      qq[2].push(ss);
      ss.first = x2;
      qq[3].push(ss);
      qq[3].pop();
    }
  }

  return 0;
}

// #include <cmath>
// #include <iostream>
// #include <queue>
// #include <utility>
// #include <vector>
// #define ll long long
// ll n, m, q, t, i = 1;
//
// typedef struct st {
//   ll len;
//   ll time;
//   friend bool operator>(const st &a, const st &b) {
//     return a.len + (i - a.time - 1) * q < b.len + (i - b.time - 1) * q;
//   }
// } ss;
//
// using namespace std;
//
// // class Less {
// // public:
// //   bool operator()(const pair<ll, ll> a, const pair<ll, ll> b) {
// //     return a.first > b.first;
// //   }
// // };
//
// int main() {
//   // n是只数 m是救兵来还有多久到
//   // q每一次都会增加的长度
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   double u, v, p;
//   cin >> n >> m >> q >> u >> v >> t;
//   p = u / v;
//   priority_queue<st, vector<st>, greater<st>> a;
//
//   for (ll j = 0; j < n; j++) {
//     ll x;
//     cin >> x;
//     ss xx;
//     xx.len = x;
//     xx.time = 0;
//     a.push(xx);
//   }
//
//   for (i = 1; i <= m; i++) {
//     ll x = a.top().len + (i - a.top().time - 1) * q;
//     ll x1 = (ll)(x * 1.0 - (ll)(p * x)), x2 = (ll)(p * x);
//     a.pop();
//     if (i % t == 0) {
//       cout << x << " ";
//     }
//     ss xx1, xx2;
//     xx1.len = x1;
//     xx1.time = i;
//     xx2.len = x2;
//     xx2.time = i;
//     a.push(xx1);
//     a.push(xx2);
//   }
//   cout << endl;
//
//   i = m;
//
//   for (ll j = 1; j <= n + m; j++) {
//     if (j % t == 0) {
//       cout << a.top().len + (m - a.top().time) * q << " ";
//     }
//     a.pop();
//   }
//
//   return 0;
// }
// #include <queue>
// #include <utility>
// #include <vector>
//
// #define ll long long
//
// using namespace std;
// class Less {
// public:   主要是这个类
//   bool operator()(const pair<ll, ll> a, const pair<ll, ll> b) {
//     return a.first > b.first;
//   }
// };
//
// int main() {
//   ll n, m, q, t; // n是只数 m是救兵来还有多久到
//   // q每一次都会增加的长度
//   double u, v, p;
//   cin >> n >> m >> q >> u >> v >> t;
//   p = u / v;
//   priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Less> a;
//
//   for (ll i = 0; i < n; i++) {
//     ll x;
//     cin >> x;
//     a.emplace(x);
//   }
//
//   for (ll i = 1; i <= m; i++) {
//     ll x = a.top().first + (i - a.top().second) * q;
//
//     ll x1 = x * 1.0 - p * x - q, x2 = p * x - q;
//     a.pop();
//     if (i % t == 0) {
//       cout << x + q * (i - 1) << " ";
//     }
//     pair<ll, ll> xx1 = {x1, i}, xx2 = {x2, i};
//     a.emplace(xx1);
//     a.emplace(xx2);
//   }
//   cout << endl;
//   // print
//   //
//   // for (int i = a.top(); !a.empty();) {
//   //   cout << a.top() << " ";
//   //   a.pop();
//   // }
//   //
//   for (ll i = 1; i <= n + m; i++) {
//     if (i % t == 0) {
//       cout << a.top().first + (m - a.top().second) * q << " ";
//     }
//     a.pop();
//   }
//
//   return 0;
// }
