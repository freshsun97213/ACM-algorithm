#include <iostream>

#define ll long long

using namespace std;

ll po(ll x, ll y) {
  ll sum = x;
  for (ll i = 0; i < y - 1; i++) {
    sum = (sum % 1000 * x % 1000) % 1000;
  }
  return sum;
}

int main() {
  ll a, b;

  while (cin >> a >> b) {
    if (a == b && b == 0) {
      return 0;
    }
    cout << po(a, b) << endl;
  }

  return 0;
}
