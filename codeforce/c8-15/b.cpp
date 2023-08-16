#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <utility>
#define ll long long
using namespace std;

const int N = 1e5 + 10;
int a[N];
// map<int, pair<int,int> >mp;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int d, m, n, mx = 0;
    cin >> n >> m >> d;
    // mx = max(n / d, m - 1);
    a[0] = 1;
    a[m + 1] = n;
    for (int i = 1; i <= m; i++) {
      cin >> a[i];
    }
    int sum = 0;
    for (int i = m + 1; i > 0; i--) {
      sum += (a[i] - a[i - 1] - 1) / d;
    }
    int index = 0;
    for (int i = 1; i <= m + 1; i++) {
      if (a[i] == 0) {
        continue;
      }
      if (a[i] % d == 0) {
        mx += a[i] / d;
      } else if (a[i] > d) {
        mx += max((ll)0, (ll)ceil(a[i] * 1.0 / d) - 1);
        index = i;
      } else {
        index = i;
        mx++;
      }
    }
    if (!index) {
      index = 1;
    } else if (index == m + 1) {
      index = m;
    }
    cout << sum << " " << index << endl;
  }

  return 0;
}
