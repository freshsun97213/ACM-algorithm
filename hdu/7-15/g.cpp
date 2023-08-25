#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  int c;
  scanf("%d", &c);
  while (c--) {
    int len, num;
    scanf("%d%d", &len, &num);
    int ant, e = 0, l = 0;
    for (int i = 0; i < num; i++) {
      scanf("%d", &ant);
      e = max(e, min(ant, len - ant));
      l = max(l, max(ant, len - ant));
    }
    cout << e << " " << l << endl;
  }

  return 0;
}

// #include <algorithm>
// #include <climits>
// #include <cmath>
// #include <iostream>
//
// using namespace std;
// const int N = 1e6 + 10;
// int a[N];
//
// int main() {
//   int t;
//   scanf("%d", &t);
//   while (t--) {
//     int s, n;
//     scanf("%d %d", &s, &n);
//     for (int i = 0; i < n; i++) {
//       scanf("%d", &a[i]);
//     }
//     int mx = 0, mi = 0;
//     for (int i = 0; i < n; i++) {
//       mi = max(mi, min(a[i], s - a[i]));
//       mx = max(mx, max(a[i], s - a[i]));
//     }
//     printf("%d %d\n", mi, mx);
//   }
//
//   return 0;
// }
