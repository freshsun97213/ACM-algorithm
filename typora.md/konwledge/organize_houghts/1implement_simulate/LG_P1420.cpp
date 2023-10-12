#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mx = 1, cnt = 1, pre = 0;
  cin >> pre;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    if (pre == a - 1) {
      cnt++;
      pre = a;
      mx = max(mx, cnt);
    } else {
      pre = a;
      mx = max(cnt, mx);
      cnt = 1;
    }
  }
  cout << mx;

  return 0;
}
