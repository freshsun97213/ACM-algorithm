#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 1;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (cnt < 10)
        cout << "0" << cnt++;
      else {
        cout << cnt++;
      }
    }
    cout << endl;
  }
}
