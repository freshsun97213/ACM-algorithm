#include <bits/stdc++.h>

using namespace std;
const int N = 4e6 + 10;
const int mod = 100003;
struct mod {

  int to, w, nex;
} no[N];
int head[N], cnt;

int sum[N];
int cnt1[N];
void bfs() {
  queue<int> q;
  q.push(1);
  sum[1] = 1;
  cnt1[1] = 1;
  while (q.size()) {
    int s = q.front();
    q.pop();
    for (int e = head[s]; e; e = no[e].nex) {
      int to = no[e].to;
      if (sum[to]) {
        if (sum[to] == sum[s] + 1) {
          cnt1[to] += cnt1[s];
          cnt1[to] %= mod;
        }
      }
    }
  }
}

int main() { return 0; }

// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;
// const int N = 1e3;
// // typedef struct node{
// //   int cnt;
// //
// //   int a[N];
// // }p;
// // p ss[N];
// vector<vector<int>> s;
//
// int bfs(int x);
//
// int main() {
//   int n, m;
//   cin >> n >> m;
//
//   for (int i = 0; i < m; i++) {
//     int v, u;
//     cin >> v >> u;
//     if (v != u) {
//       s[v].push_back(u);
//       s[u].push_back(v);
//     }
//   }
//   for (int i = 1; i <= n; i++) {
//     cout << bfs(i) << endl;
//   }
//   return 0;
// }
//
// int bfs(int x) {
//   int cnt = 0;
//   queue<int> q;
//   //q.push(s[1][0]);
//   int t = 1;
//
//   while(t != 1 && !q.empty()){
//     for(int i = 0;i < s[t].size();i ++){
//
//     }
//   }
//
//   return cnt;
// }
