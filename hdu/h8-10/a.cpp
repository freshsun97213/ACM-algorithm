#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#define ll long long
#define int ll
#define de(x) cerr << #x << " " << x << endl;
using namespace std;
const int N = 3e5 + 10;
ll a[N], tree1[N], tree2[N];
ll n, mx;
int lowbit(int x) { return x & (-x); }
void update1(int x) {
  for (; x <= mx; x += lowbit(x)) {
    tree1[x]++;
  }
}
void update12(int x) {
  for (; x <= mx; x += lowbit(x)) {
    tree2[x]++;
  }
}
void update2(int x) {
  for (; x <= mx; x += lowbit(x)) {
    tree2[x]--;
  }
}
ll sum1(int x) {
  int ans = 0;
  for (; x; x -= lowbit(x)) {
    ans += tree1[x];
  }
  return ans;
}
ll sum2(int x) {
  int ans = 0;
  for (; x; x -= lowbit(x)) {
    ans += tree2[x];
  }
  return ans;
}
signed main() {
  cin >> n;
  mx = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
  }

  for (int i = 1; i <= n; i++) {
    update12(a[i]);
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    update1(a[i]);
    update2(a[i]);
    ll sum = sum2(mx) - sum2(a[i]);
    ans += sum1(a[i] - 1) * sum;
  }
  cout << ans << endl;

  return 0;
}
