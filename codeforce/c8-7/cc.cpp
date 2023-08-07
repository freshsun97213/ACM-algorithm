#include <bits/stdc++.h>
using namespace std;

struct Data {
  int num, cnt, pos;
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int len = n * (n - 1) / 2;
    int mx = 0;
    map<int, int> mp;
    for (int i = 0; i < len; i++) {
      int x;
      cin >> x;
      mx = max(x, mx);
      mp[x]++;
    }

    vector<Data> a;
    if (mp.size() == 1 || n == 2) {
      for (int i = 0; i < n; i++) {
        cout << mp.begin()->first << ' ';
      }
      cout << '\n';
      continue;
    } else {
      int c = 0;
      for (auto x : mp) {
        c++;
        if (x.second <= (n / 2)) {
          for (int i = 0; i <= x.second; i++)
            cout << x.first << ' ';
        } else {
          a.push_back({x.first, x.second, c});
        }
      }
      int dis = n - mp.size();
      int pre = 0;
      int c1 = 0;
      for (int i = 0; i < dis; i++) {
        if ((i - pre) * (n - a[c1].pos) < a[c1].cnt) {
          cout << a[c1].num << ' ';
        } else {
          pre = i - 1;
          c1++;
          cout << a[c1].num << ' ';
        }
        // cout << endl;
      }
      cout << endl;
    }
  }

  return 0;
}
