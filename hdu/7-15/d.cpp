#include <iostream>
#define de(x) cerr << #x << " " << x << endl;
#define ll long long
using namespace std;
// the meaning:
// 从0～9 十个数字里，进行排列组合，得出一个结果N;
// 这这个N是根据 五个数字除另外五个数字得出来的
// eg： 79546 / 01283 = N 这个N 为62;

const char s[] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'};
bool check(ll x, ll y) {
  int num[10] = {0};

  for (int i = 0; i < 5; x /= 10, i++) {
    num[x % 10]++;
  }
  for (int i = 0; i < 5; y /= 10, i++) {
    num[y % 10]++;
  }
  for (int i = 0; i < 10; i++) {
    if (num[i] > 1) {
      return 0;
    }
  }
  return 1;
}
ll ans1[100], ans2[100];

int main() {
  ll x, s = 0;
  while (cin >> x) {
    int cnt = 0;
    if (x == 0) {
      return 0;
    }
    for (ll i = 1234; x * i <= 1e5; i++) {
      // de(i);
      if (check(i, x * i)) {
        ans1[cnt] = x * i;
        ans2[cnt++] = i;
      } else {
        // continue;
      }
    }
    if (s) {
      cout << endl;
    }
    if (!cnt) {
      cout << "There are no solutions for " << x << "." << endl;
    } else {
      for (int i = 0; i < cnt; i++) {
        if (ans2[i] < 10000) {
          cout << ans1[i] << " / 0" << ans2[i] << " = " << x << endl;
        } else {
          cout << ans1[i] << " / " << ans2[i] << " = " << x << endl;
        }
      }
    }
    s++;
  }

  return 0;
}
