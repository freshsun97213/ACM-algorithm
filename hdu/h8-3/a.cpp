#include <cstring>
#include <iostream>
#include <queue>

typedef struct pp {
  int r, c, d;
  pp(int a = 0, int b = 0, int dd = 0) : r(a), c(b), d(dd) {}
} p;

using namespace std;
int n, m, r, c;
int dir[][2] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1},
                {2, 1},   {1, 2},   {-1, 2}, {-2, 1}};
int mp[405][405];

void bfs(p p1);

int main() {
  cin >> n >> m >> r >> c;
  memset(mp, -1, sizeof mp);

  bfs(p(r, c, 0));

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << mp[i][j] << '\t'; //'\t'  tab建
    }
    cout << endl;
  }

  return 0;
}

void bfs(p p1) {
  queue<p> q;
  p1.d = 0;
  mp[p1.r][p1.c] = p1.d;
  q.push(p1);

  while (!q.empty()) {
    p s = q.front();
    q.pop();
    int nd = s.d + 1;
    for (int i = 0; i < 8; i++) {
      int nr = s.r + dir[i][0];
      int nc = s.c + dir[i][1];
      if (mp[nr][nc] == -1 && nr <= n && nr >= 1 && nc >= 1 && nc <= m) {
        mp[nr][nc] = nd;
        q.push(p(nr, nc, nd));
      }
    }
  }
  return;
}
/********************************
 * 列 c1 c2 c3 c4 c5 c6 c7 c8 行
 * r1
 * r2
 * r3
 * r4
 * r5
 * r6
 * r7
 * r8
 * */
