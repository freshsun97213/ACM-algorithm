#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
using pii = pair<int , int>;
#define debug(x) cerr << #x << " = " << x << endl;

void solve() {
  unordered_map<int , int> mp;
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }

  for(auto &x : a) {
    if(mp[x]) {
      cout << x << ' ';
      mp[x] = 0;
    } 
  }
  cout << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T = 1;
  cin >> T;
  while(T--)
    solve();

  return 0;
}
