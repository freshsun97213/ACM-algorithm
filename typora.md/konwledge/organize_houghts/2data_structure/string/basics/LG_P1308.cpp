#include <climits>

#include <algorithm>
#include <iostream>
#include <string>
#define de(x) cerr << #x << " " << x << endl;
using namespace std;

int main() {
  string s, sea;
  cin >> sea;
  // getchar(); 等同
  scanf("%*c");
  getline(cin, s);
  transform(s.cbegin(), s.cend(), s.begin(),
            ::tolower); // 算法库里面的 ：： tolower是指小写
  transform(sea.cbegin(), sea.cend(), sea.begin(),
            ::tolower); // 算法库里面的 ：： tolower是指小写
  int first = INT_MAX, cnt = 1;
  sea = ' ' + sea + ' ';
  s = ' ' + s + ' ';

  if ((first = s.find(sea)) == string ::npos) {
    cout << -1;
  } else {
    int index = first + sea.size() - 1;
    // de(index)
    while ((index = s.find(sea, index)) != string::npos) {
      cnt++;
      index += sea.size() - 1;
      // de(index)
    }
    // 我是按照空格来算位子 的所以自定义已经减去了 我在最前面加上的空格了
    //
    // if (first != 0) {
    //   first--;
    // }
    cout << cnt << " " << first << endl;
  }

  return 0;
}
