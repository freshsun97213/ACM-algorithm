#include <cstring>
#include <iostream>
#define ll long long

using namespace std;
const int N = 1e5 + 10;
int a[N];

int main() {
  ll t;
  cin >> t;
  while (t--) {
    memset(a, 0, sizeof a);
    ll n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
      ll dd = i;
      for (int j = i; j <= n && !a[j]; j += dd / 2) {
        cout << j << " ";
        a[j] = 1;
        dd *= 2;
      }
    }
    cout << "1" << endl;
  }

  return 0;
}
