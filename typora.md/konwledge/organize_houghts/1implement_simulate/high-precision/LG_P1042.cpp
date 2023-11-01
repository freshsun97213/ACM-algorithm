#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, res;
  int w = 0, l = 0;
  while (cin >> s) {
    res = res + s;
    if (res.find("E") != string::npos) {
      break;
    }
  }

  for (int i = 0; i < res.size(); i++) {
    if (s[i] == 'E') {
      cout << w << " " << l << endl;
      break;
    } else if (s[i] == 'W') {
      w++;
      if (w - l >= 11 || l - w >= 11) {
        cout << w << " " << l << endl;
        w = 0, l = 0;
      }
    } else if (s[i] == 'L') {
      l++;
      if (w - l >= 11 || l - w >= 11) {
        cout << w << " " << l << endl;
        w = 0, l = 0;
      }
    }

    for (int i = 0; i < res.size(); i++) {
      if (s[i] == 'E') {
        cout << w << " " << l << endl;
        break;
      } else if (w - l >= 21 || l - w >= 21) {
        cout << w << " " << l << endl;
        w = 0, l = 0;
      } else if (s[i] == 'W') {
        w++;
      } else if (s[i] == 'L') {
        l++;
      }
    }
    return 0;
  }
