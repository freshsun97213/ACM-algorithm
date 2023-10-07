#include <iostream>
#define i64 long long
using namespace std;

int main() {
  i64 n, k;
  double ave1 = 0.0, ave2 = 0.0;
  cin >> n >> k;
  i64 x = n / k;
  i64 sum1 = ((1 + n) * (n)) / 2, sum2 = (((x + 1) * k) * x) / 2;
  sum1 -= sum2;
  ave2 = sum2 * 1.0 / x;

  ave1 = sum1 * 1.0 / (n - x);
  // cout.precision(2);//这个是有效位数
  // cout << ave1 << " " << ave2 << endl;
  printf("%.01lf %.01lf", ave2, ave1);
  return 0;
}
