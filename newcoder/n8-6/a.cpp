#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int sum = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '6' || s[i] == '9' || s[i] == '0') {
      sum++;
    } else if (s[i] == '8') {
      sum += 2;
    }
  }

  cout << sum;

  return 0;
}
