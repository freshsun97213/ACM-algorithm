#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a') {
      cout << 'z';
    } else if (s[i] == 'Z') {
      cout << 'A';
    } else if (s[i] <= 'z' && s[i] >= 'a') {
      char c = s[i] - 1;
      cout << c;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      char c = s[i] + 1;
      cout << c;
    } else {
      cout << s[i];
    }
  }
  return 0;
}
