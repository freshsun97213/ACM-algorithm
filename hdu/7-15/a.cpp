#include <iostream>
#include <map>
#define ll long long

using namespace std;

// input  n array a.n
//  每个位子上可以变成 他本身 或者+1 或者-1三种操作
map<ll, ll> mp;

int main() {
  ll n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    mp[a]++;
    mp[a - 1]++;
    mp[a + 1]++;
  }
  ll mx = 0;
  for (auto &x : mp) {
    if (x.second > mx) {
      mx = x.second;
    }
  }
  cout << mx << endl;

  return 0;
}
