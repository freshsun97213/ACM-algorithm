#include <cstring>
#include <iostream>
#include <queue>
typedef struct node {
  int curr, k;
  node(int a = 0, int b = 0) : curr(a), k(b) {}
} la;
using namespace std;
la a[300];
int layer[300], mp[300];
int n, from, to;
void bfs(int x);
// 我总感觉这一题目 可以通过数学公式映射
// 成为一种 可以进行反向推导的的过程
// 其中有一个疑点就是，可能无解
// 并非像迷宫一样是一定有解的
int main() {
  cin >> n >> from >> to;
  mp[from] = 0;
  if (from == to) {
    cout << 0 << endl;
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    cin >> layer[i];
    a[i].k = 0;
    a[i].curr = i;
  }

  bfs(from);
  return 0;
}

void bfs(int x) { // 当前层数
  queue<la> q;
  q.push(a[x]);
  while (!q.empty()) {
    la s = q.front();
    q.pop();
    if (layer[s.curr] + s.curr == to || s.curr - layer[s.curr] == to) {
      cout << s.k + 1 << endl;
      return;
    }
    // if(){
    if (layer[s.curr] + s.curr <= n && !mp[layer[s.curr] + s.curr]) {
      mp[layer[s.curr] + s.curr] = s.k + 1;
      q.push(la(layer[s.curr] + s.curr, s.k + 1));
    }
    if (s.curr - layer[s.curr] >= 1 && !mp[s.curr - layer[s.curr]]) {
      mp[s.curr - layer[s.curr]] = s.k + 1;
      q.push(la(s.curr - layer[s.curr], s.k + 1));
    }
    //}
  }
  cout << "-1" << endl;
}
