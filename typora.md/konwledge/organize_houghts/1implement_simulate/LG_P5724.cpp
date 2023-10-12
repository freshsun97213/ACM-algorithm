#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mx = INT_MIN, mi = INT_MAX;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mx = max(a, mx);
    mi = min(a, mi);
  }

  cout << mx - mi << endl;

  return 0;
}
