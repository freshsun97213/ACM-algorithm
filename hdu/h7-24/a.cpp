#include <iostream>
#include <string>
#include <vector>
#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int len = s.size();
    int f = 1;
    for (int i = 0; i <= len / 2; i++) {
      if (s[i] != s[len - i - 1]) {
        cout << "no" << endl; // break;
        f = 0;
        break;
      }
    }
    if (f) {
      cout << "yes" << endl;
    }
  }

  return 0;
}
