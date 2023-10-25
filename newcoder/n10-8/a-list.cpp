#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#pragma ide diagnostic ignored "hicpp-signed-bitwise"
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC optimize("no-stack-protector,fast-math")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<pdd> vpdd;
typedef vector<vd> vvd;
#define yn(ans) printf("%s\n", (ans) ? "Yes" : "No");
#define YN(ans) printf("%s\n", (ans) ? "YES" : "NO");
template <class T> bool chmax(T &a, T b) {
  if (a >= b)
    return false;
  a = b;
  return true;
}
template <class T> bool chmin(T &a, T b) {
  if (a <= b)
    return false;
  a = b;
  return true;
}
#define FOR(i, s, e, t) for ((i) = (s); (i) < (e); (i) += (t))
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REP1(i, s, e) for (int i = (s); i < (e); ++i)
#define RREP(i, e) for (int i = (e); i >= 0; --i)
#define RREP1(i, e, s) for (int i = (e); i >= (s); --i)
#define all(v) v.begin(), v.end()
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element
ll inf = 1e18;
#define DEBUG                                                                  \
  printf("%d\n", __LINE__);                                                    \
  fflush(stdout);
template <class T> void print(vector<T> &v, bool withSize = false) {
  if (withSize)
    cout << v.size() << endl;
  REP(i, v.size()) cout << v[i] << " ";
  cout << endl;
}
mt19937_64
    rng((unsigned int)chrono::steady_clock::now().time_since_epoch().count());

int __FAST_IO__ = []() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  return 0;
}();

// list的差距就在与list的back（）上最后一个是会变的，而我的是for循环过去
//  按照pjc的说法来讲 这个是单调栈的思想。
int main() {
  int N;
  string s;
  cin >> N >> s;
  list<char> q;
  int ans = 0;
  REP(i, N) {
    if (!q.empty()) {
      if (q.back() == s[i])
        ans += 2, q.qb();
      else
        q.pb(s[i]);
    } else
      q.pb(s[i]);
  }
  while (q.size() > 1 && q.front() == q.back()) {
    ans += 2;
    q.qf();
    q.qb();
  }
  cout << ans;
  return 0;
}
