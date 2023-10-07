#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cout << ((2 + 2 == 4) ? throw 123 : 234) << endl;

  cin >> s;
  int cnt = 1;
  int sum = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] <= '9' && s[i] >= '0') {
      sum += (s[i] - '0') * cnt;
      cnt++;
    }
  }
  int x = sum % 11;
  if ((s[s.size() - 1] - '0') == (sum % 11) ||
      (sum % 11 == 10 && s[s.size() - 1] == 'X')) {
    cout << "Right" << endl;
  } else {
    for (int i = 0; i < s.size() - 1; i++) {
      cout << s[i];
    }
    // cout << x;
    // cout << ((x <= 9) ? x : "X") << endl; //
    // 输出的时候尽量不要用单引号，单引号加上cout会导致类型强制转换，
    // 所以最好在一般的输出时候，进行双引号输出
    //  为什么三目运算符号会有问题;
    // cout << x << endl;
  }
}

// if (x <= 9)
//   cout << x << endl;
// else {
//   cout << "X" << endl;
// }
