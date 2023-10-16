#include <cctype>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <string>

// using namespace std;
const int N = 1e5 + 10;
char ans[N], ss[N];

int main() {
  int n;
  char c = '+';
  scanf("%d%*c", &n);
  while (n--) {
    scanf("%s", ss);
    int x, y, res;
    char k;
    if (isdigit(ss[0])) {
      x = atoi(ss);
      scanf("%d", &y);
      k = c;
      if (k == '+') {
        res = x + y;
      } else if (k == '-') {
        res = x - y;
      } else {
        res = x * y;
      }
      // sprintf(ans ,"%d%c%d=%d");
    } else {
      scanf("%d%d", &x, &y);
      if (ss[0] == 'a') {
        k = '+';

        res = x + y;
      } else if (ss[0] == 'b') {
        k = '-';
        res = x - y;
      } else {
        k = '*';
        res = x * y;
      }
      c = k;
    }
    sprintf(ans, "%d%c%d=%d", x, k, y, res);
    printf("%s\n%d\n", ans, (int)strlen(ans));
  }

  return 0;
}
// 几个特殊函数 in cctype;
// isalpha(char a) ; 是否是字符 返回 bool
// isdigit(char a) ; 是否是数字 返回 bool
// atoi(char* ) 将字符转成int类型
// 作用sprintf 将赋值到 字符char数组里面  是c里面的函数容器string不能用
//
// sprintf(ans, "asdada%d", a);
// printf("%s", ans);
