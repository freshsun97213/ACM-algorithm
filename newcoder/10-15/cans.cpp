
// Problem: 游游的问号替换
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/66943/C
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
// 逆向 大胆 图形
string s;
signed main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> s;
  if (s.length() == 3) {
    vector<string> sxx;
    sxx.push_back("202");
    sxx.push_back("121");
    sxx.push_back("101");
    sxx.push_back("020");
    for (int j = 0; j < sxx.size(); j++) {
      int flag = 1;
      for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?')
          continue;
        else if (s[i] != sxx[j][i]) {
          flag = 0;
        }
      }
      if (flag) {
        cout << sxx[j] << '\n';
        return 0;
      }
    }
    cout << "-1\n";
    return 0;
  } else if (s.length() == 2) {
    if (s == "??") {
      cout << "12\n";
      return 0;
    }
    if (s[0] != '?' && s[1] != '?' && s[0] == s[1]) {
      cout << "-1\n";
      return 0;
    } else {
      if (s[0] == '?') {
        if (s[1] == '2') {
          s[0] = '1';
        } else {
          int sg = s[1] - '0';
          s[0] = '0' + !sg;
        }
        cout << s << '\n';
        return 0;
      } else if (s[1] == '?') {
        if (s[0] == '2') {
          s[1] = '1';
        } else {
          int sg = s[0] - '0';
          s[1] = '0' + !sg;
        }
        cout << s << '\n';
        return 0;
      } else {
        cout << s << "\n";
        return 0;
      }
    }
  } else if (s.length() == 1) {
    if (s[0] == '?') {
      cout << "1\n";
      return 0;
    } else {
      cout << s;
      return 0;
    }
  }
  string sx;
  string sb;
  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) {
      sx.push_back('0');
      sb.push_back('2');
    } else {
      sx.push_back('2');
      sb.push_back('0');
    }
  }
  int flag = 1;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '?')
      continue;
    else if (s[i] != sx[i]) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    cout << sx << '\n';
    return 0;
  }
  flag = 1;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '?')
      continue;
    else if (s[i] != sb[i]) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    cout << sb << '\n';
    return 0;
  }
  cout << "-1\n";
  return 0;
}
