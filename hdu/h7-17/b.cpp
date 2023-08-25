#include <iostream>
#include <string>
#define debug(x) cerr << #x << " " << x << endl;

using namespace std;

string s, s1;

int main() {

  int round = 0;

  while (cin >> round) {
    if (round == -1) {
      break;
    }
    int k = 0;
    int a[1000] = {0}, b[1000] = {0};
    cin >> s >> s1;
    int len = s.size(), len1 = s1.size();
    for (int i = 0; i < len; i++) {
      if (!a[s[i]]) {
        k++;
      }
      a[s[i]] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < len1; i++) {
      b[s1[i]] = 1;
      if (a[s1[i]] != 1) {
        cnt++;
      } else {
        k--;
      }
    }
    cout << "Round " << round << endl;
    if (k <= 0) {
      cout << "You win." << endl;
    } else if (cnt < 7) {
      cout << "You chickened out." << endl;
    } else if (cnt >= 7) {
      cout << "You lose." << endl;
    }

    //      cin >> round;
    if (round == -1) {
      break;
    }
  }

  return 0;
}
