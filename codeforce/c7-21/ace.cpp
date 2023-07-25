
#include<iostream>

#define ll long long
#define debug(x) cerr << #x << " " << x << endl;

using namespace std;

const int N = 2e6+10;

ll a[N];

ll nn;

int main(){
  
  ll w;  

  int t;
  scanf("%d",&t);
  while(t --){
    ll nn,n,ans;
    scanf("%lld %lld", &n,&ans);
  
    ll sums = 0,ss = 0; 
    for(int i = 1;i <= n;i ++){
      scanf("%lld",&a[i]);
      sums += a[i] * a[i];
      ss += a[i];
    }
    nn = n;
    
    ll l = 1, r = 1e9+10,w,w2,ww,x; 
    /*二分查找*/
    int cnt = 0;
    for(int i = 0;l < r;i ++){  
      w = (ll)((l + r + 1) / 2);
      w2 = w * 2;
      ww = (w2 * w2);
      x = sums + ss * w2 * 2  + nn * ww ;
      if(x == ans) {cnt = 1;}
      if(x > ans ){r= w-1;}
      else{l = w;}
    
    }
    if(!cnt)w = l;
    cout << w <<endl;
     
      
      
    }


  return 0;
}


