#include <iostream>
#include <map>
#include <utility>

// pii pair<int ,int> ;
#define ll long long
#define de(x) cerr << #x << " " << x << endl;

using namespace std;
using pii = pair<int, int>;
const int N = 1e6 + 10;

// map a[N];

// first is 2
// second is 3

int main() {
  int t;
  cin >> t;
  while (t--) {

    ll n, m;
    map<ll, pair<ll, ll>> a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      a[i] = {0, 0};
    }

    for (int i = 0; i < m; i++) {
      ll l, r, op;
      cin >> l >> r >> op;
      if (op == 2) {
        a[l].first += 1;
        a[r + 1].first -= 1;
      } else {
        a[l].second += 1;
        a[r + 1].second -= 1;
      }
    }
  }

  return 0;
}
