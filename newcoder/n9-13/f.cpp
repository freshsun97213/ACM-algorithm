#include <iostream>

using namespace std;

int main() {
  double x, y;
  cin >> x >> y;

  printf("%lf", x / (((100 - x) * y) / (100 - y)));
  return 0;
}
