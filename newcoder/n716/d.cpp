#include<iostream>
#define ll long long 
#define mod 1000000007
#define debug(x) cerr <<  #x << " " << x << endl;
using namespace std;



int main(){
  ll n,sum=0;
  cin >> n;
  for(ll i = 1;i <= 4;i ++){sum = (sum + i * 2);}
  int high =n *n;
  if(n > 2){sum = (sum + (5 + 4+(n-2))*(4*(n-2))*3 )%1000000007;}
  //for(ll i =5;i <= 4 * (n-1) && i <n * n;i ++){sum = (sum + i * 3) % (mod);}//debug(i);debug(sum);}
  if(n >= 3){
    sum = (sum + ((4*(n-1) + 1 + n * n) * (n*n-4*(n-1))*2)) % mod;
    //debug(4*(n-1)+1+n*n);
    //debug(((n*n-4*(n-1)))*2)
    //debug( (4*(n-1) + 1 + n * n) * ((n*n-4*(n-1))*2) );
  }
    //printf("%lld",sum);
  //for(ll i = 4 * n;i <= n*n ;i ++){}
  cout << sum ;
  return 0;
}


