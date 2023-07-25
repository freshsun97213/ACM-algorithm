#include<iostream>
#define ll long long
//#define mod 1000000007

using namespace std;
constexpr int mod =1e9+7;
ll sum (ll n){
  return ( n % mod * (n % mod + 1)/2 ) % mod;
}//最后是在这里少了取mod才可以，需要在每一步都进行mod，
//否则都有可能导致超出上限制


int main(){
  ll n,ans =0 ;
  cin >> n;

  //5~4*(n-2)+4
  ans =  20 + ((sum(4*(n-2)+4)-sum(4))*3+mod)% mod + (sum(n*n) - sum (4*(n-2)+4)+mod)*4 % mod;
  cout << (ans% mod + mod ) % mod;
  return 0;
}


