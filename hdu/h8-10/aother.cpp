#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
int w[N], tr[N], a[N], tr2[N];
ll res, n;
int lowbit(int x) { return x & -x; }
void modify(int u, int x) {
  for (int i = u; i <= n; i += lowbit(i)) {
    tr[i] += x;
  }
}

ll query(int x) {
  ll res = 0;
  for (int i = x; i; i -= lowbit(i)) {
    res += tr[i];
  }
  return res;
}

void modify2(int u, int x) {
  for (int i = u; i <= n; i += lowbit(i)) {
    tr2[i] += x;
  }
}
ll query2(int x) {
  ll res = 0;
  for (int i = x; i; i -= lowbit(i)) {
    res += tr2[i];
  }
  return res;
}
int find(int x) {
  int l = 0, r = n - 1;
  while (l < r) {
    int mid = l + r >> 1;
    if (a[mid] >= x)
      r = mid;
    else
      l = mid + 1;
  }
  return l;
}

int find2(int x) {
  int l = 0, r = n - 1;
  while (l < r) {
    int mid = l + r + 1 >> 1;
    if (a[mid] <= x)
      l = mid;
    else
      r = mid - 1;
  }
  return l;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  memcpy(w, a, sizeof a);
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    int all = find(w[i]);
    int all2 = find2(w[i]);
    ll now = query(all + 1);
    ll now2 = query2(all + 1);
    res += (ll)(now) * (n - 1 - i - (all2 - now2));
    modify(all2 + 1, 1);
    modify2(all + 1, 1);
  }
  cout << res << endl;
  return 0;
}
