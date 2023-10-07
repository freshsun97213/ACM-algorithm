#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int a[110];
string s[110];

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second != b.second)
    return a.second > b.second;
  else {
    return a.first < b.first;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    cin >> a[i];
  }
  // cout << n << " " << m << endl;
  vector<int> score;
  score.resize(n + 1);
  vector<pair<int, int>> b;
  vector<vector<pair<int, int>>> lose;
  int mx = INT_MIN;
  for (int i = 1; i <= n; i++) {
    // getline(cin, s[i]);
    cin >> s[i];
    for (int j = 1; j <= s[i].size(); j++) {
      if (s[i][j - 1] == 'o') {
        score[i] += a[j];
      } else {
        b.push_back({j, a[j]});
      }
    }
    score[i] += i;
    mx = max(mx, score[i]);
    sort(b.begin(), b.end(), cmp);
    lose.push_back(b);
    b.clear();
  }

  for (int i = 0; i < n; i++) {
    if (mx == score[i + 1]) {
      cout << "0" << endl;
    } else {
      int j;
      for (j = 0; j < lose.size() && score[i + 1] < mx; j++) {
        score[i + 1] += lose[i][j].second;
      }
      cout << j << endl;
    }
  }

  return 0;
}
