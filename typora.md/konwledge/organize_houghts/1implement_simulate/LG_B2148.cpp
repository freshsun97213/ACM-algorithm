#include <iostream>

using namespace std;

double f(double x, double n) {
  if (n == 1) {
    return x / (n + x);
  }
  double sum = 0;
  sum += x / (f(x, n - 1) + n);
  return sum;
}

int main() {
  double x, n;
  cin >> x >> n;
  cout.precision(3);
  printf("%.02lf", f(x, n));

  return 0;
}
