#include <cmath>
#include <cstring>
#include <iostream>
#include <map>

#define ll long long
#define de(x) cerr << #x << " " << x << "   ";

#define den(x) cerr << #x << " " << x << endl;
using namespace std;
const int N = 2e5 + 10;
ll a[N];
ll b[N];
int main() {
  int t;
  cin >> t;
  while (t--) {
    map<ll, ll> mp;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
      cin >> a[i];
      mp[i] = 0;
    }
    mp[n] = 0;
    int f = 1;
    int x = n * (n - 1) / 2;
    if (a[n - 1] != x) {
      a[n] = x;
    }
    for (int i = n; i >= 1; i--) {
      a[i] = a[i] - a[i - 1];
      mp[a[i]]++;
      if (mp[a[i]] >= 2) {
        b[f] = a[i];
        f++;
      }
      if ()
    }
    ll a = 0, s = 0;
    for (auto &x : mp) {
      if (x.second == 0) {
        a += x.first;
        s++;
      }
    }
    // de(a) den(b[1]);
    if (f > 2)
      else if (b[1] == a) {
        cout << "Yes" << endl;
      }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
