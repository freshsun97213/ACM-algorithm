#include <iostream>
#include <map>
#define ll long long

using namespace std;

ll a[40];

int main() {
  int t;
  cin >> t;
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i <= 40; i++) {
    a[i] = a[i - 1] * 2;
  }

  while (t--) {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    ll aa;
    cin >> aa;
    int f = aa;
    for (int i = 1; i < n; i++) {
      aa;
      cin >> aa;
    }
    // int f = 0,ff = -1,fff = -1;//ff用来找第一个不为1得位子
    // for(auto &x : mp){
    //   if(x.second == 1 && ff == -1 ){ff = x.first ; }
    //   if(x.second > 1){cout << "-1" <<endl;f =1;break;}
    // }
    // if(f){continue;}
    // 找k
  }

  return 0;
}
