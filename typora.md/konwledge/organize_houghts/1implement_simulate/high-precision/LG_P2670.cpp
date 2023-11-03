#include <iostream>

using namespace std;
const int N = 1e3 + 10;
int n, m;
char mp[N][N];
int ans[N][N];
int isexit(int x, int y) {
  if (x < 0 || x > n || y < 0 || y > m) {
    return 0;
  }

  else if (mp[x][y] == '*') {
    return 1;
  } else {
    return 0;
  }
}
void sum(int x, int y) {
  int cnt = 0;
  if (isexit(x - 1, y)) {
    cnt++;
  }
  if (isexit(x - 1, y + 1)) {
    cnt++;
  }
  if (isexit(x, y + 1)) {
    cnt++;
  }
  if (isexit(x, y - 1)) {
    cnt++;
  }
  if (isexit(x - 1, y - 1)) {
    cnt++;
  }
  if (isexit(x + 1, y)) {
    cnt++;
  }
  if (isexit(x + 1, y - 1)) {
    cnt++;
  }
  if (isexit(x + 1, y + 1)) {
    cnt++;
  }
  ans[x][y] = cnt;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> mp[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mp[i][j] == '?') {
        sum(i, j);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mp[i][j] == '*') {
        cout << '*';
      } else {
        cout << ans[i][j];
      }
      // cout << ((mp[i][j] == '*') ? mp[i][j] : ans[i][j]);
    }
    cout << endl;
  }

  return 0;
}
