#include <iostream>

using namespace std;

void solve() {
  int x, y, k;
  cin >> x >> y >> k;
  if (x >= y) {
    cout << x << endl;
  } else {
    if (x + k >= y) {
      cout << y << endl;
    } else {
      cout << (x + k) + 2 * (y - (x + k)) << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
