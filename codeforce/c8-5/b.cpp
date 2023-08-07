#include <cstring>
#include <iostream>
#include <map>
#define de(x) cerr << #x << " " << x << endl;
#define ll long long

using namespace std;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    map<ll, ll> mp;
    mp.clear();
    // memset(mp[],0,sizeof mp);
    ll mx = 0, sum = 0;
    for (int i = 0; i < n; i++) {
      ll a;
      cin >> a;
      sum += a;
      mp[a]++;
      mx = max(mx, mp[a]);
    }

    if (n == 1) {
      cout << "NO" << endl;
      continue;
    }

    // mp[1] + n <= sum;
    if (sum <= mp[1] * 2) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
