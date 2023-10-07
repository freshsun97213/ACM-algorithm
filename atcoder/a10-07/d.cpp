#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

#define i64 long long
using namespace std;
map<i64, i64> mp;
bool cmp(const pair<i64, i64> &a, const pair<i64, i64> &b) {
  return a.first < b.first;
}

int main() {
  int n;
  cin >> n;
  vector<pair<i64, i64>> s;
  s.resize(n);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    mp[a] += b;
    // cin >> s[i].first >> s[i].second;
  }

  for (auto &x : mp) {
    if (x.second >= 2) {
      mp[x.first * 2] += x.second / 2;
      x.second = x.second % 2;
    }
  }
  i64 sum = 0;
  for (auto x : mp) {
    sum += x.second;
  }

  cout << sum << endl;

  return 0;
}
