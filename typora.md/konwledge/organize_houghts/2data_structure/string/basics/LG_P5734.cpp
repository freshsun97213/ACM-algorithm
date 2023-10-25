#include <cctype>
#include <iostream>
#include <string>
#define de(x) cerr << #x << " " << x << endl;
using namespace std;

int main() {
  int q;
  cin >> q;
  string str;
  cin >> str;

  // cout << str << "sda" << endl;
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;
    // scanf("%d%*c", &a);
    string s;
    if (a == 1) {
      cin >> s;
      str += s;
      cout << str << endl;
    } else if (a == 2) {
      int f, e;
      cin >> f >> e;
      s = str.substr(f, e);
      str = s;
      cout << str << endl;
    } else if (a == 3) {
      int f;
      cin >> f >> s;

      str.insert(f, s);
      cout << str << endl;
    } else if (a == 4) {
      cin >> s;
      if (str.find(s) == string ::npos) {
        cout << -1 << endl;
      } else {
        cout << str.find(s) << endl;
      }
    }
  }

  return 0;
}
