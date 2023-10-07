#include <cmath>
#include <iostream>

#define i64 long long

using namespace std;

int main() {
  double n, i = 0;
  cin >> n;
  for (; pow(2, i) <= n; i++) {
  }
  cout << floor(log(n) / log(2)) + 1;

  return 0;
}
