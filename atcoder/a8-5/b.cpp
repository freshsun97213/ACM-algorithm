#include <iostream>
#define ll long long

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main() {
  ll n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    ll s, d;
    cin >> s >> d;
    if (a[d] == 0) {
      a[d] = s;
    }
  }
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] == 0) {
      if (cnt != 0) {
        cout << "-1" << endl;
        return 0;
      } else {
        cnt = i;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}
