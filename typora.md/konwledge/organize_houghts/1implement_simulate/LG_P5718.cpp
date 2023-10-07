#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n;
  int mi = INT_MAX;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    (mi > a) ? mi = a : mi = mi;
    mi = min(mi, a);
  }
  cout << mi << endl;

  return 0;
}
