#include <iostream>
#include <map>
#define ll long long

using namespace std;
map<int, int> f;
int find(int x) {
  if (f[x] == x) {
    return x;
  } else {
    return f[x] = find(f[x]);
  }
}

int main() {
  int n, m, p, q;
  cin >> n >> m >> p >> q;
  for (int i = -m; i <= n; i++) {
    f[i] = i;
  }

  for (int i = 0; i < p + q; i++) {
    ll x, y;
    cin >> x >> y;
    f[find(x)] = find(y);
  }
  ll su = 0, sum = 0;
  for (auto &x : f) {
    if (find(x.second) == find(-1)) {
      sum++;
    } else if (find(x.second) == find(1)) {
      su++;
    }
  }

  cout << min(sum, su);

  return 0;
}

