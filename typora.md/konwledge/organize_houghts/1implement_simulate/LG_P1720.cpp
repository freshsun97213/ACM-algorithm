#include <cmath>
#include <iostream>

#define dd double

using namespace std;

// 为什么是斐波那且数列 这个式子
// 这个是非波那且数列的通项公式
//  我好像也推导过

int main() {
  dd n, fn;
  cin >> n;
  dd frac = (1.0 + sqrt(5)) / 2.0, nfrac = (1.0 - sqrt(5)) / 2.0;
  fn = (pow(frac, n) - pow(nfrac, n)) / sqrt(5);
  printf("%.02lf", fn);

  return 0;
}
