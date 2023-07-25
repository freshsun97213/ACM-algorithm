// #include<iostream>
// #include<cmath>
//
// using namespace std;
//
// int main(){
//   
//
//
//
//
//
//   return 0;
// }
//
//
//
//




//
//
//
//
//
//
//
//
//
//




//using namespace std;
#include<iostream>
#define ll long long 
#include<cmath>

using namespace std;

int is(int s){
  if(sqrt(s) - (int)sqrt(s) < 1e-16)return sqrt(s);
  return 0;
}

int len(ll x){
  for(int i = 1;x > 0;++ i ){
    x /= 10;
    if(x == 0){return i;}
  }
}

int main(){
  int n;
  cin >> n;
  while(n -- ){
    ll x;
    cin >> x;
    int  l = len(x);
    int cnt = 0;
    int sqf = sqrt((pow(10,k) * x);
    int sqf = 
    for(int k = 1;k <= 9-l;k ++){
      for(ll i = (int)(sq)_;i < (int)(sq);i++){
        //double xx = x;
        if( i * i == x ){
          printf("%lld\n",i);

          cnt = 1;
          break;
        }
      
      }
        
      if(cnt){break;}

    }
  if(!cnt){printf("-1\n");}
  }

  return 0;
}
//
