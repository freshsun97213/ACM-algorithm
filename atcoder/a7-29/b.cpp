#include <iostream>
#include <string>
#define ll long long

using namespace std;
const int N = 1e4 + 10;
string s[N];

int is(ll x, ll y) {
  for (ll i = x; i < x + 9; i++) {
    for (ll j = y; j < y + 9; j++) {
      if (i <= x + 2 && j <= y + 2 || i >= x + 6 && j >= y + 6) {
        if (s[i][j] != '#') {
          return 0;
        }
      } else if (i == x + 3 && j <= y + 3 || j == y + 3 && i <= x + 3 ||
                 x + 5 == i && j >= y + 5 || i >= x + 5 && j == y + 5) {
        if (s[i][j] != '.') {
          return 0;
        }
      }
    }
  }
  return 1;
}

int main() {
  string ss;
  ll n, m;
  cin >> n >> m;
  // char ssss = getchar();
  for (ll i = 0; i < n; i++) {
    getline(cin, s[i]); // scanf("%[^\n]%*c",s[i])
    //
    char c = getchar();
  }

  for (ll i = 0; i < n - 8; i++) {
    for (ll j = 0; j < m - 8; j++) {
      if (is(i, j)) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }

  return 0;
}
