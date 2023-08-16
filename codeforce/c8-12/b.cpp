#include <cmath>
#include <iostream>
#include <queue>

using namespace std;
vector<vector<int>> a;
vector<int> b;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    a.clear();
    priority_queue<int, vector<int>, less<int>> q[n];
    for (int i = 0; i < n; i++) {
      int c;
      cin >> c;
      for (int j = 0; j < c; j++) {
        int s;
        cin >> s;
        q[i].push(s);
        while (q[i].size() > 2) {
          q[i].pop();
        }
      }
    }

    int sum = 0;
    if (n == 1) {
      while (q[0].size() > 1) {
        q[0].pop();
      }
      cout << q[0].top() << endl;
    } else {
      for (int j = 0; j < n; j++) {
        for (int i = 1; i <= 2; i++) {
          b.push_back(q[j].top());
          q[j].pop();
        }
        a.push_back(b);
        b.clear();
      }
      int min2 = a[0][0], min1 = a[0][1];
      sum = min2;
      for (int i = 1; i < n; i++) {
        min2 = min(a[i][0], min2);
        min1 = min(a[i][1], min1);
        sum += a[i][0];
      }
      cout << sum - min2 + min1 << endl;
    }
  }

  return 0;
}
