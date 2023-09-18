#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int N = 1e4 + 10;
string s[N];
int m;
int judge(string s1, string s2) {
  int ans = 0;
  for (int i = 0; i < m; i++) {
    if (s1[i] != s2[i]) {
      ans = i + 1;
      break;
    }
  }
  return ans;
}

int main() {

  // string s[];
  int n;
  // string s[n];
  //  s.resize(n);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string ss;
    cin >> ss;
    s[i] = ss;
  }
  sort(s, s + n);

  int sum = 0;
  // cout << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << s[i] << endl;
  // }
  // cout << endl;
  int pre = 0;
  for (int i = 0; i < n - 1; i++) {
    sum += max(pre, judge(s[i], s[i + 1]));
    // cout << sum << endl;
    pre = judge(s[i], s[i + 1]);
    if (i == n - 2) {
      sum += judge(s[i], s[i + 1]);
    }
  }

  cout << sum << endl;

  return 0;
}
