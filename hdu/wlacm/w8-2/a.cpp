// #include <ctime>
#include <iostream>
#include <string>
using namespace std;

int pick[100], pp[100];
int n, m;

void dfs(int t) {
  if (t == n - m) {
    for (int i = 0; i < m; i++) {
      printf("%c", pp[i] + 64);
    }
    printf("\n");
  }

  for (int i = 1; i <= n; i++) {
    if (pick[i] == 0) {
      pick[i] = 1;
      pp[n - t] = i;
      dfs(t - 1);
      pick[i] = 0;
    }
  }
}

int main() {
  // int n;
  while (cin >> n >> m) {
    //    long start = clock();
    dfs(n);
    //  long end = clock();
  }
  // cout << double(end - start) * 1000 / CLOCKS_PER_SEC << "ms" << endl;
  return 0;
}
