#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#define d double
using namespace std;
const int N = 1e5 + 10;
const d eps = 1e-6;
d a[N];
d sum;
int check(d x) {
  if (x * x * x <= sum) {
    return 0;
  }
  return 1;
}

int main() {
  int n;
  cin >> n;
  // ld sum = 0;
  for (int i = 0; i < n; i++) {
    d aa;
    cin >> aa;
    // a[i] = aa * aa * aa;
    sum += aa * aa * aa;
  }
  // ld l = 0, r = sum;
  // while (r - l > eps) {
  //   ld mid = l + (r - l) / 2;
  //   if (check(mid)){
  //     r = mid;
  //   } else {
  //     l = mid;
  //   }
  // }
  printf("%lf", pow(sum, 1.0 / 3));
  // cout << pow(sum, 1.0 / 3) << endl;

  return 0;
}
