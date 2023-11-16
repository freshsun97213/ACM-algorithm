#include <cmath>
#include <iostream>
#include <vector>

#define i64 long long
#define vi vector<i64>

using namespace std;

int dif(i64 a, i64 b) {
  int s = abs(a - b);
  return s;
}

int main() {
  int n;
  cin >> n;
  vi sm(n), a(n), b(n), c(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
    sm[i] = a[i] + b[i] + c[i];
  }
  i64 sum = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (dif(a[i], a[j]) <= 5 && dif(b[i], b[j]) <= 5 &&
          dif(c[i], c[j]) <= 5) {
        if (dif(sm[i], sm[j]) <= 10) {
          sum++;
        }
      }
    }
  }
  cout << sum << endl;

  return 0;
}
