#include <iostream>
#include <map>
#include <queue>

using namespace std;
const int N = 1e5 + 10;

int a[N], ans[5];

int main() {
  int k, n;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  int i = 0, j = 0;
  int mx = n;
  for (; i < n - 1; i++) {
    for (; j < n; j++) {
      mp[a[j]]++;
      int nu = 0;
      for (int p = 1; p <= 4; p++) {
        if (mp[p]) {
          nu++;
        }
      }
      // int nu = mp.size();
      //  int num = mp[1] + mp[2] + mp[3] + mp[4];
      while (nu >= 4 && mp[4] >= k) {
        int num = mp[1] + mp[2] + mp[3] + mp[4];
        mx = min(mx, num);

        mp[a[i]]--;
        // for(int p = 1;p <= 4;p ++){
        if (!mp[a[i++]]) {
          nu--;
        }
      }
    }
  }
  cout << mx;

  return 0;
}
