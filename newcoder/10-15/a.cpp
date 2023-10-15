#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int t;
  // cin >> t;
  // while (t--) {
  string s, s0, s2;
  cin >> s;
  int l = s.size();
  if (l == 1) {
    if (s[0] == '?') {
      cout << 2;
    } else {
      cout << s;
    }
  } else if (l == 2) {
    map<char, int> mp;
    mp[s[0]]++;
    mp[s[1]]++;
    if (s[1] != '?' && s[0] != '?' && s[1] == s[0]) {
      cout << -1;
    } else if (mp['?'] == 2) {
      cout << "12" << endl;
    } else if (mp['?'] == 0) {
      cout << s;
    } else {

      if (s[0] == '2') {
        s[1] = '1';
      } else if (s[1] == '2') {
        s[0] = '1';
      } else if (s[1] == '?') {
        int sg = s[0] - '0';
        s[1] = '0' + !sg;
      } else if (s[0] == '?') {
        int sg = s[1] - '0';
        s[0] = '0' + !sg;
      }
      cout << s << '\n';
      return 0;
      // 当是 1？ 或者？1的时候就是11了
      // if (s[0] == '?') {
      //   cout << 2 - (int)(s[1] - '0') << s[1];
      // } else {
      //   cout << s[0] << 2 - (int)(s[0] - '0');
      // }
    }
  } else if (l == 3) {
    string ss[4];
    ss[0] = "101";
    ss[1] = "202";
    ss[2] = "020";
    ss[3] = "121";
    int f = -1;
    for (int i = 0; i < 4; i++) {
      int ff = 1;
      // cout << "---" << endl;
      for (int j = 0; j < 3; j++) {
        if (s[j] == '?') {
          // cout << 6;
          continue;
        } else if (s[j] != ss[i][j]) {
          ff = 0;
          break;
        }
      }
      if (ff) {
        f = i;
        break;
      }
    }
    if (f >= 0)
      cout << ss[f];
    else {
      cout << -1;
    }
  } else {

    string s0, s2;
    for (int i = 0; i < l; i++) {
      if (i & 1) {
        s0.push_back('2');
        s2.push_back('0');
      } else {
        s2.push_back('2');
        s0.push_back('0');
      }
    }
    int f = 1;
    for (int i = 0; i < l; i++) {
      if (s[i] == '?') {
        continue;
      } else if (s[i] != s0[i]) {
        f = 0;
        break;
      }
    }
    if (f) {
      cout << s0;
      return 0;
    }
    f = 1;
    for (int i = 0; i < l; i++) {
      if (s[i] == '?') {
        continue;
      } else if (s[i] != s2[i]) {
        f = 0;
        break;
      }
    }
    if (f) {
      cout << s2;
    } else {
      cout << -1;
    }
  }
  // }
  return 0;
}
