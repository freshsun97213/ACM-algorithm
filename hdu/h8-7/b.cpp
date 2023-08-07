#include <iostream>
#include <numeric>
#include <vector>

#define ll long long

using namespace std;
const int N = 1e5 + 10;
// int f[N];

vector<int> f;

int find(int x) {
  if (x == f[x]) {
    return x;
  } else {
    return f[x] = find(f[x]);
  }
}

int main() {
  ll n, m, p;
  cin >> n >> m >> p;
  ll a, b;
  f.resize(n + 1);
  iota(f.begin(), f.end(), 0);

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    f[find(a)] = find(b);
  }

  for (int i = 0; i < p; i++) {
    cin >> a >> b;
    if (find(a) == find(b)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
