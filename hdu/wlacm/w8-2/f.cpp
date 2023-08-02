#include <algorithm>
#include <iostream>
#include <set>

using namespace std;
int n, m;

int main() {
  cin >> n >> m;
  string ss;
  for (int i = 0; i < n; i++) {
    ss += "0";
  }
  for (int i = 0; i < m; i++) {
    ss += "1";
  }
  set<string> ans;

  do {
    ans.insert(ss);
  } while (std::next_permutation(ss.begin(), ss.end()));

  for (auto &x : ans) {
    cout << x << endl;
  }

  return 0;
}
