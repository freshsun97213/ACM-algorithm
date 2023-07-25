#include <cmath>
#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const int N = 1e4 + 10;

int isprime(ll a) {
  if (a < 2) {
    return 0;
  }
  for (ll i = 2; i <= sqrt(a); i++) {
    if (a % i == 0) {
      return 0;
    }
  }
  return 1;
}

// int a[N];

int main() {
  ll n;
  cin >> n;
  ll x, sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> x;
    sum += x;
  }

  if (n == 1 && isprime(sum)) {
    cout << "Yes" << endl;
  } else if (n == 2 && (isprime(sum - 2) || sum % 2 == 0) && sum > 3) {
    cout << "Yes" << endl;
  } else if (n >= 3 && sum >= 2 * n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

// #include <cmath>
// #include <iostream>
//
// #define ll long long
// #define debug(x) cerr << #x << " " << x << endl;
//
// const int N = 1e6 + 10;
// using namespace std;
//
// int a[N];
//
// int isodd(ll s) {
//   if (s % 2) {
//     return 1;
//   }
//   return 0;
// }
//
// int isprime(ll s) {
//   for (ll i = 2; i <= sqrt(s); i++) {
//     if (s % i == 0) {
//       return 0;
//     }
//   }
//   return 1;
// }
//
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   ll n;
//   cin >> n;
//
//   ll sumodd = 0, sumeven = 0;
//   for (ll i = 0; i < n; i++) {
//     cin >> a[i];
//     if (!isprime(a[i])) {
//       if (isodd(a[i])) {
//         sumodd += 1;
//       } else {
//         sumeven += 1;
//       }
//     }
//   }
//   if (sumodd % 2 == 0 && sumeven % 2 == 0) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }
//
//   return 0;
// }
