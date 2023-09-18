#include <cmath>
#include <iostream>

using namespace std;

double p(double n, double x) {
  if (n == 1) {
    return sqrt(1 + x);
  }
  double sum = 0;
  sum += sqrt(n + p(n - 1, x));
  return sum;
}

int main() {
  double x, n;
  cin >> x >> n;
  cout.precision(3);
  cout << p(n, x) << endl;

  return 0;
}
