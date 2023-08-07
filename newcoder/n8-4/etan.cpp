#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
typedef long long int ll;
#define bigint __int128
const ll inf = 0x7fffffff, mod = 998244353;
#define green "\033[97;32m"
#define white "\033[90;32m"
#define yellow "\033[90;33m"
#define red "\033[97;31m"
#define blue "\033[97;34m"
#define magenta "\033[97;35m"
#define cyan "\033[97;36m"
#define reset "\033[0m"
#define debug cout << red

ll power(ll a, ll b, ll m = mod) {
  ll ans = 1;
  while (b) {
    if (b & 1)
      ans *= a, ans %= m;
    a *= a, a %= m, b >>= 1;
  }
  return ans;
}

ll C(ll low, ll high, ll m = mod) {
  ll ans = 1;
  for (ll i = high - low + 1; i <= high; i++)
    ans *= i, ans %= m;
  for (ll i = 2; i <= low; i++)
    ans = ans * power(i, m - 2), ans %= m;
  return ans;
}

ll exgcd(ll a, ll b, ll &x, ll &y) {
  if (b == 0) {
    x = 1, y = 0;
    return a;
  }
  ll d = exgcd(b, a % b, y, x);
  y -= a / b * x;
  return d;
}

ll ex_inv(ll a, ll m = mod) { // 求a在mod下的逆元，不存在逆元返回-1
  ll x, y, d = exgcd(a, m, x, y);
  return d == 1 ? (x % m + m) % m : -1;
}

ll inv(ll x, ll m = mod) { return power(x, m - 2); }

void init() {
#ifdef endl
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#endif
}

// 线段树
template <typename T = int> class SegTree {
private:
  class Node {
  public:
    int l = 0;
    int r = 0;
    T val, lazy = 0;
  };

  void _add(int id, int l, int r, T x) {
    if (nodes[id].l > r || nodes[id].r < l)
      return;

    if (nodes[id].l >= l && nodes[id].r <= r) {
      nodes[id].lazy += x;
      nodes[id].val += (nodes[id].r - nodes[id].l + 1) * x;
      return;
    }

    pushDown(id);
    _add(id << 1, l, r, x);
    _add(id << 1 | 1, l, r, x);
    pushUp(id);
  }

  ll _query(int id, int l, int r) {
    if (nodes[id].l > r || nodes[id].r < l)
      return 0;
    if (nodes[id].l >= l && nodes[id].r <= r) {
      return nodes[id].val;
    }
    pushDown(id);
    return _query(id << 1, l, r) + _query(id << 1 | 1, l, r);
  }

  void pushUp(int id) {
    nodes[id].val = nodes[id << 1].val + nodes[id << 1 | 1].val;
  }

  void pushDown(int id) {
    if (nodes[id].lazy) {
      nodes[id << 1].lazy += nodes[id].lazy;
      nodes[id << 1].val +=
          nodes[id].lazy * (nodes[id << 1].r - nodes[id << 1].l + 1);
      nodes[id << 1 | 1].lazy += nodes[id].lazy;
      nodes[id << 1 | 1].val +=
          nodes[id].lazy * (nodes[id << 1 | 1].r - nodes[id << 1 | 1].l + 1);
      nodes[id].lazy = 0;
    }
  }

public:
  vector<Node> nodes;

  // 初始化线段树长度, 如果需要初始化值, 那么调用带参build, 不然调用无参build
  SegTree(int n) {
    nodes.resize(n << 2);
    // build(1, 1, n);
  }

  // 允许传入一个vector
  void build(int id, int l, int r, vector<T> &data) {
    nodes[id].l = l;
    nodes[id].r = r;

    if (l == r) {
      nodes[id].val = data[l];
      return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid, data);
    build(id << 1 | 1, mid + 1, r, data);
    pushUp(id);
  }

  // 允许传入一个C数组
  void build(int id, int l, int r, T *&data) {
    nodes[id].l = l;
    nodes[id].r = r;

    if (l == r) {
      nodes[id].val = data[l];
      return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid, data);
    build(id << 1 | 1, mid + 1, r, data);
    pushUp(id);
  }

  void build(int id, int l, int r) {
    nodes[id].l = l;
    nodes[id].r = r;
    nodes[id].val = 0;

    if (l == r) {
      return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
  }

  void add(int left, int right, T x) { _add(1, left, right, x); }

  T query(int left, int right) { return _query(1, left, right); }
};

void solve() {
  int n;
  cin >> n;
  int q;
  cin >> q;
  SegTree<int> segTree1(n), segTree2(n);
  segTree1.build(1, 1, n);
  segTree2.build(1, 1, n);
  vector<ll> v(n + 1);
  vector<ll> pre(n + 1);
  vector<int> pos1;
  for (int i = 1; i <= n; i++) {
    ll x;
    cin >> x;
    v[i] = x % 2;
    pre[i] = pre[i - 1] + v[i];
    if (v[i]) {
      pos1.push_back(i);
    }
  }
  for (int i = 0; i < pos1.size(); i += 2) {
    if (i + 1 == pos1.size())
      break;
    segTree1.add(pos1[i], pos1[i], pos1[i + 1] - pos1[i]);
  }
  for (int i = 1; i < pos1.size(); i += 2) {
    if (i + 1 == pos1.size())
      break;
    segTree2.add(pos1[i], pos1[i], pos1[i + 1] - pos1[i]);
  }
  //    return;

  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;

    if ((pre[r] - pre[l - 1]) % 2 == 1) {
      cout << "NO" << endl;
      continue;
    }
    auto p = lower_bound(pos1.begin(), pos1.end(), l) - pos1.begin();
    int cnt = 0;
    if (p % 2 == 0) {
      cnt = segTree1.query(l, r);
    } else {
      cnt = segTree2.query(l, r);
    }
    auto s = r - l + 1 - cnt;
    if (s >= x) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
};

int main() {

  init();
  int T = 1;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}
