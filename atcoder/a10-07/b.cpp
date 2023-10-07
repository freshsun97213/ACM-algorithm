#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

string s[110];
struct aaa {
  int id, num;
  friend bool operator<(const aaa &a, const aaa &b) {
    if (a.num != b.num) {
      return a.num > b.num;
    } else {
      return a.id < b.id;
    }
  }
} a[110];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> s[i];
    a[i].id = i;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= s[i].size(); j++) {
      if (s[i][j - 1] == 'o') {
        a[i].num++;
      }
    }
  }
  sort(a + 1, a + 1 + n);

  for (int i = 1; i <= n; i++) {
    cout << a[i].id << " ";
  }
  // cout << a[2].num;
  return 0;
}
