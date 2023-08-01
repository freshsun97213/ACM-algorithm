#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  vector<int> a;
  priority_queue<int, vector<int>, greater<int>> A;
  int n;
  cin >> n;
  while (n--) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      A.push(x);
    } else if (op == 2) {
      cout << A.top() << endl;
    } else {
      A.pop();
    }
  }
  return 0;
}
