#include <algorithm>
#include <iostream>
#include <vector>
#define i64 long long
#define vi vector<long long>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vi a(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  i64 sum = 0;
  i64 prex = a[0], prey = a[n];
  for (int i = 1; i < n; i++) {
    sum += (a[i] - prex) + (a[i + n] - prey);
    prex = a[i];
    prey = a[i + n];
  }
  cout << sum << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " " << a[i + n] << endl;
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
