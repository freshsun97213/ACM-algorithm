#include <algorithm>
#include <cstdio>
#include <iostream>
#define de(x) cerr << #x << " " << x << " ";
#define ll long long

using namespace std;

const int N = 1e6 + 10;

ll a[N];

void sawap(int a, int b) {
  int t = a;
  a = b;
  b = t;
}

void mysort(ll a[], ll l, ll r) {
  if (l >= r) {
    return;
  }
  ll pivot = a[l];

  ll i = l;
  for (ll j = l; j < r; j++) {
    if (pivot > a[j]) {
      swap(a[i], a[j]);
      i++;
    }
  }
  swap(a[i], a[r]);
  // for (int j = l; j < r + 1; j++) {
  // de(a[j]);
  //}
  // cout << endl;
  mysort(a, l, i - 1);
  mysort(a, i, r);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  scanf("%lld", &n);
  for (ll i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
  }
  // for (int i = 0; i < n; i++) {
  // cout << a[i];
  //}

  sort(a, a + n);
  //  for (int i = 0; i < n; i++) {
  //    de(a[i]);
  //  }

  printf("%lld ", a[(n) / 2]);

  return 0;
}
