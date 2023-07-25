#include<iostream>

#define ll long long
#define debug(x) cerr << #x << " " << x << endl;

using namespace std;

const int N = 2e6+10;

ll a[N];


ll binary_search(ll sums, ll ss,ll ans,ll l,ll r,ll nn){
  if(l >= r){return l;}
  ll w = (ll)((l + r + 1) / 2);
  ll w2 = w * 2;
  //debug(l + r);
  //debug(w2);
  ll ww = (w2 * w2);
  //debug(ww)
  ll x = sums + ss * w2 * 2  + nn * ww ;
  //if(x == ans) {return w;}
  //debug(x);
  if(x > ans ){r= w-1;}
  else{l = w ;}
  binary_search(sums,ss,ans, l, r,nn);


}


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
      //debug(ss);
      //debug(sums) ;
    }
    nn = n;
    //ll sums = 0,ss=0;
    //for(int i = 1;i <= n;i ++){
    //  sums += a[i] * a[i];
    //  ss += 2 * a[i];
    //}
    
    ll l = 1, r = 1e9+10; 
    /*二分查找*//*
    int cnt = 0;
    for(int i = 0;l < r;i ++){  
      //if(l >= r){return l;}
      w = (ll)((l + r + 1) / 2);
      w2 = w * 2;
      //debug(l + r);
      //debug(w2);
      ww = (w2 * w2);
      //debug(ww)
      x = sums + ss * w2 * 2  + nn * ww ;
      if(x == ans) {cnt = 1;}
      //debug(x);
      if(x > ans ){r= w-1;}
      else{l = w;}
      //binary_search(sums,ss,ans, l, r,nn);
    
    }
    if(!cnt)w = l;*/
    w = binary_search(sums,ss,ans,l,r,n);
    cout << w <<endl;
     
      
      
    /*顺序查找，但是就会爆出超时
    for(w = 1; c != sum;w ++){
      //sum = 0;
      ww = w * w * 2 * 2;
      ss += ss;
       sum = sums + ss + ww;
    }

    printf("%lld\n",w/2); 
*/
    }


  return 0;
}


