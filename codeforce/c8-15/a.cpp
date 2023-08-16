#include <cmath>
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#define int long long
using namespace std;
// anna c/2 +1;
// kiat c/2;
signed main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + ceil(c * 1.0 / 2) > b + c / 2) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }
  }

  return 0;
}
