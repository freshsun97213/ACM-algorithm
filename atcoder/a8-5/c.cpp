#include <algorithm>
#include <iostream>

#define ll long long
const int N = 2e5 + 10;
using namespace std;
ll a[N];
int main() {
  ll sum = 0, n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  ll ave = sum / n;
  ll sump = 0, sumn = 0;
  for (int i = 0; i < n; i++) {

    if (a[i] > ave) {
      sump += min(a[i] - ave, a[i] - ave - 1);
    } else if (a[i] < ave) {
      // sumn += diff;
      sumn += min(ave - a[i], ave + 1 - a[i]);
    }
  }

  cout << max(sump, sumn) << endl;

  return 0;
}
