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
  for (int i = 1; i <= n; i++) { // 行a数组里面是列，则j表示的是行
    int f = 1;
    for (int j = 1; j < i; j++) { // 列
      if (abs(a[j] - i) == abs(j - n - x)) {
        f = 0;
      } else {
        a[n - x] = i;
        dfs(x - 1); // row
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
