#include <iostream>
#include <queue>

using namespace std;

const int N = 1e8 + 10;

struct s {
  int a, b, c;
} st[N];
int aa[N];
int add(int i, int x) { return st[i].a * x * x + st[i].b * x + st[i].c; }

// int a[N];

int main() {

  priority_queue<int, vector<int>, less<int>> a;
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> st[i].a >> st[i].b >> st[i].c;
  }

  for (int i = 1; i <= 10000; i++) {
    for (int j = 0; j < n; j++) {
      a.push(add(j, i));
      if (a.size() > m) {
        a.pop();
      }
    }
  }

  for (int i = 0; i < m; i++) {
    aa[i] = a.top();
    a.pop();
  }

  for (int i = m - 1; i >= 0; i--) {
    cout << aa[i] << " ";
  }

  return 0;
}
