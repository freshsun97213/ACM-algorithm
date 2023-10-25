#include <cctype>
#include <iostream>
#include <string>
#define de(x) cerr << #x << " " << x << endl;
#define i64 long long

using namespace std;

int main() {
  string s;
  getline(cin, s);
  i64 cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (isalpha(s[i])) {
      int k = (i64)(s[i] - 'a') + 1;
      if (k <= 15) {
        cnt += (int)(s[i] - 'a') % 3 + 1;
      } else if (k > 19 && k <= 22) {
        cnt += (int)((s[i] - 'a') - 4) % 3 + 1;
      } else if (k <= 19 && k > 15) {
        cnt += k - 15;
      } else {
        cnt += k - 22;
      }
    } else if (s[i] == ' ') {
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
