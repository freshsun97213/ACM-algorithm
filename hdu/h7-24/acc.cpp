#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t --){
    int n,s;
    cin >> n >>s;
    vector<int>a(n+1);
    for(int i =1;i <= n;i ++){
      cin >> a[i];
    }
    int ans = n + 1;
    int l = 1, r = 1,sum = 0; 
    while(r <= n){
      while(r <= n && sum < s){sum += a[r ++];}
      while(l <= r && sum >= s){
        ans = min(r- l,ans);
        sum -= a[l ++];
      }
    }
    
    cout <<( (ans == n+1) ? 0:ans) <<endl;

  }
  // cout << clock () *1000 /CLOCKS_PER_SEC<<"MS";



  return 0;
}  
