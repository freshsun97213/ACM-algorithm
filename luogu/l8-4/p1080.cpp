#include <algorithm>
#include <cstring>
#include <iostream>
#define d(x) cerr << #x << " " << x;
#define de(x) cerr << #x << " " << x << " ";
#define debug(x) cerr << #x << " " << x << " " << endl;
#define ll long long
typedef struct {
  ll r, l;
} s;
using namespace std;
const int N = 1e5 + 10;
ll ans[N], cmpp[N];
ll sum[N], n;
s p[N];
bool cmp(const s &a, const s &b) { return a.r * a.l < b.r * b.l; }
