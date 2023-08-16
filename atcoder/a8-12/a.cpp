#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define int long long
using namespace std;
vector<vector<int>> a;
vector<int> b;

// vector 会导致很多的下标问题，如果下标不是从0开始建议不用

signed main() {
  int n;
  cin >> n;
  // int m = n;
  for (int i = 1; i <= n; i++) {
    int c, d;
    cin >> c;
    for (int i = 1; i <= c; i++) {
      cin >> d;
      b.push_back(d);
    }
    a.push_back(b);
    b.clear();
  }
  b.clear();
  int x;
  cin >> x;
  vector<int> num;
  int mx = 40;
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[i].size(); j++) {
      if (a[i][j] == x) {
        mx = min(mx, (int)a[i].size());
        num.push_back(i + 1);
        break;
      }
    }
  }
  int cnt = 0;
  // cout << num.size() << endl << cnt << endl;
  for (int i = 0; i < num.size(); i++) {
    if (a[num[i] - 1].size() == mx) {
      cnt++;
    }
  }
  cout << cnt << endl;
  for (int i = 0; i < num.size(); i++) {
    if (a[num[i] - 1].size() == mx) {
      cout << num[i] << " ";
    }
  }
  return 0;
}
