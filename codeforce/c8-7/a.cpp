#include <cstring>
#include <iostream>

#define ll long long
using namespace std;

const int N = 2e5 + 10;

int a[N];

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++) {
      a[i + 1] = s[i] - '0';
    }
    int cnt = -1, ff = 0, ccnt = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i + 1] >= '5') {
        cnt = i + 1;
        break;
      }
    }
    if (cnt == 0) {
      cout << "1";
      for (int i = 0; i < len; i++) {
        cout << "0";
      }
      cout << endl;
    } else if (cnt == -1) {
      cout << s << endl;
    } else {
      for (int i = len - 1; i > cnt; i--) {
        a[i + 1] = 0;
        a[i]++;
      }
      cnt--;
      for (; cnt > 0; cnt--) {
        if (a[cnt] >= 5) {
          a[cnt] = 0;
          a[cnt - 1] += 1;
        } else {
          break;
        }
      }
      if (a[0] == 0) {
        for (int i = 1; i <= len; i++) {
          cout << a[i];
        }
        cout << endl;
      } else {
        for (int i = 0; i <= len; i++) {
          cout << a[i];
        }
        cout << endl;
      }
    }
  }

  return 0;
}

