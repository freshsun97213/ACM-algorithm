#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>

using namespace std;

vector<vector<pair<string, int>>> mp(200,
                                     vector<pair<string, int>>(200, {"", 0}));
int n, m, cnt = 0;

string ss = "W";
int dir[][2] = {{-1, 0}, {-1, -1}, {0, -1}, {1, -1},
                {1, 0},  {1, 1},   {0, 1},  {-1, 1}};
void bfs(int x, int y);
int main() {
  cin >> n >> m;
  string s;
  for (int i = 1; i <= n; i++) {
    cin >> s;
    for (int j = 1; j <= m; j++) {
      mp[i][j].first = s[j - 1];
      mp[i][j].second = 0;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (mp[i][j].second == 0 && mp[i][j].first == ss) {
        cnt++;
        bfs(i, j);
      }
    }
  }
  cout << cnt << endl;
  // cout << endl;
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= m; j++) {
  //     cout << mp[i][j].first;
  //   }
  //   cout << endl;
  // }
  //
  return 0;
}

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push({x, y});
  while (!q.empty()) {
    pair<int, int> p;
    p = q.front();
    q.pop();
    for (int i = 0; i < 8; i++) {
      int nx = p.first + dir[i][0];
      int ny = p.second + dir[i][1];
      if (mp[nx][ny].second == 0 && nx >= 1 && nx <= n && ny >= 1 && ny <= m &&
          mp[nx][ny].first == ss) {
        mp[nx][ny].second = cnt;
        q.push({nx, ny});
      }
    }
  }
  return;
}

/***************************DFS--DFS***************/

// 暴了堆栈
//  string ss;
//  void dfs(int x, int y);
//
//  int main() {
//    cin >> n >> m;
//    string s;
//    for (int i = 1; i <= n; i++) {
//      cin >> s;
//      for (int j = 1; j <= m; j++) {
//        // string c;
//        // char a;
//        // scanf("%1c", &a);
//        mp[i][j].first = s[j - 1];
//        // if (mp[i][j].first == s[j - 1]) {
//        //   cout << 1;
//        // }
//        mp[i][j].second = 0;
//      }
//    }
//    // cout << endl;
//    // for (int i = 1; i <= n; i++) {
//    //   for (int j = 1; j <= m; j++) {
//    //     cout << mp[i][j].first;
//    //   }
//    //   cout << endl;
//    // }
//
//    // memset(mp.second,0,mp.size());
//    ss = "W";
//    for (int i = 1; i <= n; i++) {
//      for (int j = 1; j <= m; j++) {
//        if (mp[i][j].second == 0 && mp[i][j].first == ss) {
//          cnt++;
//          dfs(i, j);
//        }
//      }
//    }
//    cout << cnt << endl;
//    // cout << endl;
//    // for (int i = 1; i <= n; i++) {
//    //   for (int j = 1; j <= m; j++) {
//    //     cout << mp[i][j].second;
//    //   }
//    //   cout << endl;
//    // }
//    //
//    return 0;
//  }
//
//  void dfs(int x, int y) {
//    mp[x][y].second = cnt;
//    for (int i = 0; i < 8; i++) {
//      int nx = x + dir[i][0];
//      int ny = y + dir[i][1];
//      if (nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
//        if (mp[nx][ny].first == ss) {
//          dfs(nx, ny);
//        }
//      }
//    }
//    return;
//  }
