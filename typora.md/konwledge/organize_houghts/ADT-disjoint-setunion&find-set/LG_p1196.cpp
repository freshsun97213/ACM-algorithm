#include <cstring>
#include <iostream>
#include <numeric>
#include <vector>

#define vi vector<int>
using namespace std;
const int N = 3e4 + 10;
int disjset[N + 10];
vi pos(N + 10);
void init() {
  for (int i = 0; i < N; i++) {
    disjset[i] = -i;
  }
}

int find(int x) {
  int t = disjset[x];
  if (t < 0) {
    return x;
  }
  return find(t);
}

void setunion(int x, int y) {
  if (x != y) {
    pos[x] += pos[y];
    pos[x] = 0;
    disjset[x] = y;
  }
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  init();
  while (t--) {
    char c;
    int a, b;
    cin >> c >> a >> b;
    int x = find(a), y = find(b);
    if (c == 'M') {
      setunion(x, y);
    } else {
      if (x != y) {
        cout << -1 << endl;
      } else {
        cout << -disjset[x] << endl;
      }
    }
  }

  return 0;
}
