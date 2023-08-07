#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <typename T> void print(T &a) {
  cerr << "container a is ";
  for (auto i : a)
    cerr << i << ' ';
  cerr << '\n';
}

void solve() {
  string s;
  cin >> s;
  vector<int> a;
  for (auto x : s) {
    a.emplace_back(x - '0');
  }

  if (a.size() == 1) {
    if (a[0] >= 5)
      cout << 10 << '\n';
    else
      cout << a[0] << '\n';
  } else {
    int pos = 0;
    bool ok = false;
    for (int i = 0; i < a.size(); i++) {
      if (a[i] >= 5) {
        ok = true;
        pos = i;
        break;
      }
    }

    if (!ok) {
      for (auto &x : a)
        cout << x;
      cout << '\n';
      return;
    }

    if (pos == 0) {
      cout << 1;
      for (int i = 0; i < a.size(); i++) {
        cout << 0;
      }
      cout << '\n';
    } else {
      for (int i = pos; i < a.size(); i++)
        a[i] = 0;
      bool flag = false;
      for (int i = pos - 1; i >= 0; i--) {

        a[i] += 1;
        if (i == 0 && a[i] > 4) {
          flag = true;
          a[i] = 0;
          break;
        }
        if (a[i] <= 4)
          break;
        else {
          a[i] = 0;
        }
      }

      if (flag) {
        cout << 1;
        for (int i = 0; i < a.size(); i++) {
          cout << 0;
        }
        cout << '\n';
      } else {
        for (int i = 0; i < a.size(); i++)
          cout << a[i];
        cout << '\n';
      }
    }
  }
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T = 1;
  cin >> T;
  while (T--)
    solve();

  return 0;
}
