#include <iostream>

using namespace std;

const int N = 1e6 + !0;
int a[N];

int main() {
  int n, k;
  cin >> n >> k;
  int cnt = n - k + 1;
  int smacnt = 1;

  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      cout << cnt << " ";
      cnt++;
    } else if (i > n - ((k - 1) * 2) && i % 2 == 1) {
      cout << cnt++ << " ";
    } else {
      cout << smacnt++ << " ";
    }
  }

  return 0;
}
