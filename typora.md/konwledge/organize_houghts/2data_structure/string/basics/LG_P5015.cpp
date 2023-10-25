#include <cctype>
#include <iostream>
#include <string>

#define i64 long long

using namespace std;

int main() {
  string s;
  // cin >> s;

  getline(cin, s);

  i64 cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (isalpha(s[i]) || isdigit(s[i])) {
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}
