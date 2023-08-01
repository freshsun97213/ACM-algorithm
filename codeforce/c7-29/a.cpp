#include <iostream>
#define ll long long

using namespace std;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
      ll a;
      cin >> a;
      if (a - i == 0)
        sum++;
    }
    cout << (sum + 1) / 2 << endl;
  }

  return 0;
}
