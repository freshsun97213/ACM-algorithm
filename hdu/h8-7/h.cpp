#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
const int N = 1e6 + 109;
// int ;
vector<int> f;
int find(int x) {
  if (f[x] == x) {
    return x;
  } else {
    return f[x] = find(f[x]);
  }
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    if (n == m && m == 0) {
      return 0;
    }
    f.resize(n);
    vector<int>::iterator it;
    int cnt = 0;
    for (it = f.begin(); it <= f.end(); it++) {
      *it = cnt++;
    }
    // int b ;
    // cin >> b;
    // if (m == 0) {
    //
    //   scanf("%*d%*d");
    //   cout << "1" << endl;
    //   continue;
    for (int i = 1; i <= m; i++) {
      int a, b, t;
      cin >> t >> b;
      for (int i = 1; i < t; i++) {
        cin >> a;
        f[find(a)] = find(b);
      }
    }
    cnt = 0;
    for (int i = 0; i < n; i++) {
      if (find(f[i]) == find(f[0])) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}
