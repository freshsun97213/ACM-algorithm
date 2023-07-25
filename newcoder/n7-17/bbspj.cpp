#include <iostream>
using namespace std;

const int mod = 998244353;
#define ll long long

typedef pair<ll, ll> PII;
ll n, m;

inline ll gcd(ll a, ll b) {
	while (b^=a^=b^=a%=b);
	return a;
}

PII multi(PII p) {
	ll tt = gcd(p.first, p.second * 2) % mod;
	return {p.first / tt % mod, p.second * 2 / tt % mod};
}

PII add(PII a, PII b) {
	ll x1 = a.first, y1 = a.second;
	ll x2 = b.first, y2 = b.second;
	ll up = (x1 * y2 % mod + x2 * y1 % mod) % mod;
	ll down = y1 * y2 % mod;
	ll tt = gcd(up, down);
	return {up / tt % mod, down / tt % mod};
}

PII dfs(int x, int have, PII p) {
	if ( have < x ) { return {0, 0}; }
	if ( have >= m + n ) { return p; }

	//win
	PII _ans = dfs(1, have + x, multi(p));
	//lose
	_ans = add(_ans, dfs(2 * x, have - x, multi(p)) ) ;
	return _ans;
}

int main() {
	cin >> n >> m;
	PII ans = dfs(1, n, {1, 1});
	cout << ans.first << " " << ans.second << "\n";
	return 0;
}
