#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> a;
  int b, cnt = 0;
  while (cin >> b) {
    if (b != 0) {
      a.push(b);
    } else {
      break;
    }
    cnt++;
  }
  for (int i = 0; i < cnt - 1; i++) {
    printf("%d ", a.top());
    a.pop();
  }
  printf("%d", a.top());

  return 0;
}
