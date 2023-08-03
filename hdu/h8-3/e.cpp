#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;
int mp[40][40], mpp[40][40];
int n, dir[][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
void bfs(int x, int y);

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> mp[i][j];
    }
  }
  for (int i = 1; i <= n; i = n - 1 + i) {
    for (int j = 1; j <= n; j++) {
      if (mpp[i][j] == 0 && mp[i][j] == 0) {
        bfs(i, j);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j = n - 1 + j) {
      if (mpp[i][j] == 0 && mp[i][j] == 0) {
        bfs(i, j);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (mp[i][j] == 0 && mpp[i][j] == 0) {
        cout << 2 << " ";
      } else {
        cout << mp[i][j] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push({x, y});
  while (!q.empty()) {
    pair<int, int> p;
    p = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = p.first + dir[i][0];
      int ny = p.second + dir[i][1];
      if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && mp[nx][ny] == 0 &&
          mpp[nx][ny] != 2) {
        mpp[nx][ny] = 2;
        q.push({nx, ny});
      }
    }
  }
  return;
}
