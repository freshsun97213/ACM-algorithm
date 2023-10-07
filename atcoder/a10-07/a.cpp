#include <climits>
#include <iostream>
#include <string>

#define i64 long long
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 1; i <= s.size(); i++) {
    if (s[i - 1] == '1' && i % 2 == 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
