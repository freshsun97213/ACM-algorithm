#include <cmath>
#include <iostream>

#define dd double
using namespace std;

int main() {

  dd sn, q = 2;
  cin >> sn;
  int cnt = 0;
  /*等比数列求和*/
  // sn = 2 *(1 - q^n) /1 - q;
  // sn *(1-q) /2 = 1 - q ^n
  // 1 - (sn *(1-q) / 2) = q ^ n;
  // log_{q}^{1 - (sn *(1-q) / 2)}= n;

  cnt = ceil(log(1 - (sn * 0.02) / 2) / log(0.98));

  /*模拟 --- */
  // while (sum <= n) {
  //   cnt++;
  //   sum += pre;
  //   pre *= 0.98;
  // }
  cout << cnt;

  return 0;
}
