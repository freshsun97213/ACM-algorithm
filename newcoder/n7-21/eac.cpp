#include<iostream>
#include<cmath>
#define ll long long
using namespace std; 
#define debug(x) cerr << #x  << " "<<x << endl;
int len(ll x){
  int cnt = 0;  
  while(x /= 10){
    cnt ++;
  }
  return cnt;
  
}


int main(){
  int t;
  cin >> t;
  ll x;
  while(t --){
    cin >> x;
    int cnt = 0;
    int size = len(x);
    for(double k = 1;k <= 1e18;k*= 10){
      double l=sqrt(k*x);
      long double r=sqrt(k*x+k-1.0000000);
      //for(ll i = l;i < r;i++){
     // debug(l);
      //cout.precision(6);
      //debug(r);
      //}
      //
      //if(l - x < 1e-16){printf("%\n");}
      //printf("%lf",ceil(1));
     // if(x == 999999999){break;}
      ll rr = (ll)(r),lll = (ll)(ceil(l));
      //debug(rr);
      //debug(lll);
      //if(x == 999999999){printf("316227766\n");cnt = 1;break;}
      if(rr - lll >= 0){
        if(rr > 1e9){break;}
        cnt = 1;
        printf("%.0f\n",ceil(l));
        break;
      }

    }
    if(!cnt ){printf("-1\n");}

  }


  return 0;

}


