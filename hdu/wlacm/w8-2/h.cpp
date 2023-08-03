#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> ans;

int a[20];

int n;
void print() {
  for (int i = 0; i < n; i++) {
    printf("%5d", a[i]);
  }
  return;
}

void dfs(int x) {
  if (x == 0) {
    print();
  }
  // to protray the recall by for loop
  for (int i = 1; i <= n; i++) { // 这个里面是该行里面能够选择的列

    for (int j = 0; j < n - x; j++) {
      if (a[j] == i || abs(a[j] - i) == abs(j - n + x - 1)) {
        break;
      } else {
        a[n - x] = i; // 位置由x和n定义的所以，直接就是回溯
        dfs(x - 1);
        break;
      }
    }
  }

  return;
}

int main() {

  cin >> n;

  dfs(n);

  return 0;
}
