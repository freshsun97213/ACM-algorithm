#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#define ll int
using namespace std;
typedef vector<string> vvs;

// vvs a;
const int N = 1e6;
char a[N];
// string s[N];
//  string 最大是65534的长度

signed main() {

  cin.getline(a, 1000000);
  int ans = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    if (i % 2 == 1 && a[i] != '0') {
      ans += i + 1;
    } else if (i % 2 == 0 && a[i] != '1') {
      ans += i + 1;
    }
  }
  int ans2 = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    if (i % 2 == 1 && a[i] != '1') {
      ans2 += i + 1;
    } else if (i % 2 == 0 && a[i] != '0') {
      ans2 += i + 1;
    }
  }
  cout << min(ans, ans2) << endl;
  return 0;
}
