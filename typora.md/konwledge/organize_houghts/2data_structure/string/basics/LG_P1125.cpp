#include <climits>
#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int pri(int x) {
  if (x <= 1) {
    return 0;
  }
  int f = 1;
  for (int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) {
      f = 0;
      break;
    }
  }
  return f;
}

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto &x : s) {
    mp[x]++;
  }
  int mx = INT_MIN, mi = INT_MAX;
  for (auto x : mp) {
    mx = max(mx, x.second);
    mi = min(mi, x.second);
  }

  if (pri(mx - mi)) {
    cout << "Lucky Word" << endl;
    cout << mx - mi << endl;
  } else {
    cout << "No Answer" << endl << 0 << endl;
  }

  return 0;
}
