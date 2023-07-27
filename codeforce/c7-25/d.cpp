#include <cmath>
#include <cstring>
#include <iostream>
#include <map>

#define ll long long
#define debug(x) cerr << #x << " " << x << endl;

using namespace std;

const int N = 2e5 + 10;

ll a[N], idx2[N], idx0[N];

int main() {
  // map<ll, ll> mp;
  // memset(mp, 0, sizeof(mp));
  ll t;
  cin >> t;
  while (t--) {
    ll mx = 0;
    // memset(void *i, int c, size_t n)
    // memset(mp,0,sizeof(mp));
    map<ll, ll> mp;
    ll n, f = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
      cin >> a[i];
    }
    int cnt = 0;
    for (int i = n - 1; i > 0; i--) {
      ll s = a[i] - a[i - 1];
      mp[s]++;
      // mx = s > n ? s : mx;
      if (mp[s] > 2 || cnt >= 2 /*a[i] > n * (n - 1) / 2*/) {
        f = 1;
        // cout << "NO" << endl;
      }
      if (mp[s] == 2 || s > n) {
        idx2[cnt] = s;
        cnt++;
      }
    }
    if (cnt >= 2) {
      f = 1;
    }
    // for (int i = 0; i < cnt; i++) {
    //  debug(idx2[cnt]);
    //}

    // if (cnt >= 2) {
    // cout << "NO" << endl;
    //}
    ll cn = 0;

    for (int i = 1; i <= n; i++) {
      // if(mx < i && mp[i] > 1){ mx = i;}
      if (mp[i] == 0) {
        idx0[cn] = i;
        cn++;
      }
      ll idx0 = mp.find(0)->first;
    }
    // if(mx )
    if (f) {
      cout << "NO" << endl;
    } else if (idx0[0] + idx0[1] == idx2[0] || cn == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
