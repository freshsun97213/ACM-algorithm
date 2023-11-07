#include <iostream>
#include <map>
#include <utility>
#include <vector>

#include <string>
using namespace std;

// 状态表示 一位是 15代表长度 50代表数值
// 奇数偶数

int main() {
  int n;
  cin >> n;
  map<pair<int /*len,need*/, int>, int> cout;
  vector<string> s(n);
  int ans = 0;
  for (auto &si : s) {
    cin >> si;
    int sum = 0, len = si.size();
    for (char c : si) {
      sum += c - '0';
    }
    ans += cout[{len, sum}];
    cout[{len, sum}] += 1;
  }
  ans = ans * 2 + n; // 自身和相同数字的相加
  for (auto si : s) {
    int m = si.size();
    for (int i = 0; i * 2 < m; i++) {
      int diff = 0, mid = 0, len = m - 2 * i;
      for (int j = 0; j < m; j == 1) {
        if (j < 1) {
          diff += s[j] - '0';
        }
      }
    }
  }

  return 0;
}
