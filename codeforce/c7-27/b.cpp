#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#define ll long long

using namespace std;

const int N = 3e5 + 10;
ll ans[N];

struct moster {
  ll hp, id;
  friend bool operator<(const moster &a, const moster &b) {
    // return a.hp > b.hp;
    if (a.hp != b.hp)
      return a.hp > b.hp;
    else
      return a.id < b.id;
  }

} m[N];

int main() {
  ll t, n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    ll a, cnt = 0;
    for (int i = 1; i <= n; i++) {
      cin >> a;
      if (a % k == 0) {
        ans[cnt] = i;
        cnt++;
        cout << i << " ";
      } else {
        m[i - cnt].id = i;
        m[i - cnt].hp = a % k;
      }
    }
    sort(m + 1, m + n - cnt + 1);
    for (int i = 1; i <= n - cnt; i++) {
      cout << m[i].id << " ";
    }

    cout << endl;
  }

  return 0;
}
