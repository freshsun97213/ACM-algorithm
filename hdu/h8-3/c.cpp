#include <iostream>
// typedef struct node{
//   int x,y;
// }p;
int dir[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

using namespace std;
int n, m, t, a1, b1, cnt = 0;
int mp[10][10];
void dfs(int x, int y);
int main() {
  cin >> n >> m >> t;
  int a, b;
  cin >> a >> b >> a1 >> b1;

  for (int i = 0; i < t; i++) {
    int x, y;
    cin >> x >> y;
    mp[x][y] = 1;
  }

  dfs(a, b);
  cout << cnt << endl;
  return 0;
}

void dfs(int x, int y) {
  mp[x][y] = 1;
  if (x == a1 && y == b1) {
    cnt++;
    return;
  }
  for (int i = 0; i < 4; i++) {
    int nx = x + dir[i][0];
    int ny = y + dir[i][1];
    if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && mp[nx][ny] == 0) {
      mp[nx][ny] = 1;
      dfs(nx, ny);
      mp[nx][ny] = 0;
    }
  }
  return;
}
