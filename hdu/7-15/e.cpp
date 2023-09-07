#include <iostream>
#define ll long long

using namespace std;

// i row 行  j column 列
int a[20][20];
int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, -1, 0, -1, 1, 0, 1, -1};
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%1d", &a[i][j]);
    }
  }
  ll mx = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ans = 0;
      for (int k = 0; k < 8; k++) {
        ans = 0;
        int x = i, y = j;
        ans = a[i][j];
        for (int d = 1; d < n; d++) {
          x = (x + dx[k] + n) % n;
          y = (y + dy[k] + n) % n;
          ans = ans * 10 + a[x][y];
        }
        mx = max(mx, ans);
      }
    }
  }
  cout << mx << endl;

  return 0;
}
