#include <iostream>
#define m 998244353
#define de(x) cerr << #x << " " << x << endl;
#define ll long long
#define int ll
using namespace std;
const int N = 1e6 + 10;
ll tree[N];
ll frac[N];

void init() {
  frac[0] = 1;
  for (int i = 1; i <= N; i++) {
    frac[i] = (frac[i - 1] % m * i % m) % m;
  }
  return;
}
int lowbit(int x) { return (x & (-x)); }

void update(ll x) {
  for (; x < N; x += lowbit(x)) {
    ++tree[x];
  }
}
ll sum(ll x) {
  int ans = 0;
  for (; x; x -= lowbit(x)) {
    ans += tree[x];
  }
  return ans;
}
signed main() {
  init();
  ll n, a;
  cin >> n;
  ll su = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    // de(a);
    ll cnt = a - sum(a) - 1;
    // de(cnt);
    update(a);
    //  cout << cnt << " " << frac[cnt];
    su = (su % m + cnt % m * frac[n - i] % m) % m;
  }
  cout << su + 1;

  return 0;
}
