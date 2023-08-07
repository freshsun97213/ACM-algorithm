#include <iostream>
#include <string>
#define ll long long
#define mod 998244353
using namespace std;
const int N = 1e6 + 10;
int a[N];
int main() {
  string s;
  ll n;
  cin >> n >> s;

  for (int i = 0; i < n; i++) {
    a[i] = s[i] - '0';
    if (i >= 1) {
      if (a[i] != 1 && a[i - 1] != 1) {
        cout << "-1" << endl;
        return 0;
      }
    }
  }

  ll sum = a[n - 1];
  for (int i = n - 2; i > 0; i--) {
    if (a[i] == 1) {
      sum++;
    } else {
      sum = (sum % mod * a[i] % mod) % mod;
    }
  }

  cout << sum;

  return 0;
}
