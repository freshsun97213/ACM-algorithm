#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;
const int N = 1e4 + 10;
struct node {
  int old, nw;
} a[N];

int preold = 1, prenw = 1;

int check(node &s) { return abs(s.old - preold) + abs(s.nw - prenw); }

// using PII = pair<int, int>;
// int LIMIT;
int main() {
  int n;
  cin >> n;
  // LIMIT = 2 * n * sqrt(n);
  // vector<PII> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].nw;
    a[i].old = i + 1;
  }
  for (int i = 0; i < n; i++) {
    int index = i;
    int mi = INT_MAX;
    for (int j = i; j < n; j++) {
      int k = check(a[j]);
      if (k < mi) {
        mi = k;
        index = j;
      }
    }
    if (index != i) {
      preold = a[index].old;
      prenw = a[index].nw;
      swap(a[index], a[i]);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << a[i].old << " " << a[i].nw << endl;
  }
  return 0;
}
