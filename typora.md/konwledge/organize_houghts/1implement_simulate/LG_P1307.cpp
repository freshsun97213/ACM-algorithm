#include <iostream>
#include <string>

using namespace std;

// 栈的用法和字符串的差不多
// 但是 别忘记了模除 和 除数 ，乘除和取模都是不会改变其正负性质的
// 取模也可以在负数里面应用
int main() {
  string s, s1;
  cin >> s;
  int f = 1;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (f && s[i] != '0') {
      f = 0;
      s1 += s[i];
    } else if (s[i] == '-') {
      s1 = s[i] + s1;
    } else if (!f) {
      s1 += s[i];
    }
  }
  if (s1 == "") {
    s1 += '0';
  }
  cout << s1 << endl;

  return 0;
}
