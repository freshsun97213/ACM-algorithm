#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

// using namespace std;

const int N = 2e5 + 10;

int main() {
  int n;
  cin >> n;
  vector<pii> v(n);
  vector<int> ans;
  int mmax = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v[i]=make_pair(a, v[i - 1].second + 1);
    if (!v[a].first) {
      v[i] = make_pair(a, v[i - 1].second + 1);
      
      if(mmax < v[i].second - v[a].second + 1){
        mmax = v[i].second - v[a].second+1;
        ans.clear();
      // cout <<  v[i].second - v[a].second;
        
        for (int j = 0; j <= v[i].second - v[a].second + 1; j++) {
         // cout << v[i].first << " ";
          ans.emplace_back(v[j].first);
        }
      }
    }

  }

  cout << mmax << '\n';
  for(int i = 0;i < mmax;i ++){cout << ans[i] << " ";}
  return 0;
}
