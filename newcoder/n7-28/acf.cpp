#include <algorithm>
#include <iostream>

#define ll long long

using namespace std;

const int N = 1e6 + 10;

struct st {
  ll id, num;
  friend bool operator<(const st &a, const st &b) { return a.num < b.num; }
} s[N];

int main() {
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; i++) {
    cin >> s[i].num;
    s[i].id = i;
  }
  sort(s, s + n + 1);

  ll l = 1, r = n;
  while (l < r) {
    ll mid = (l + r) / 2;
    if (s[r].num - s[mid].num >= s[mid].num - s[l].num) {
      r--;
    } else {
      l++;
    }
  }
  cout << s[l].id << endl;

  return 0;
}
