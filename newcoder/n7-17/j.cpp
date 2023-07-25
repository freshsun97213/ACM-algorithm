#include<iostream>
#define mod 998244353
#define ll long long

typedef pair<ll,ll> PII
using namespace std;
PII frac12={1,2};
PII frac0={0,0};

inline ll gcd(ll a, ll b) {
	while (b^=a^=b^=a%=b);
	return a;
}

PII multi(PII p) {
//	if ( !state ) return {0, 0};
	ll tt = gcd(p.first, p.second * 2);
	return {p.first / tt, p.second * 2 / tt};
}

PII add(PII a, PII b) {
	ll x1 = a.first, y1 = a.second;
	ll x2 = b.first, y2 = b.second;
	ll up = x1 * y2 + x2 * y1;
	ll down = y1 * y2;
	ll tt = gcd(up, down);
	return {up / tt, down / tt};
}

// k 当前的赌注 wager 这一把投入的钱财
PII dfs(ll stop,ll sum,int k,PII pre_frac){
  

  if(stop <= sum){return pre_frac;}
  else (sum == 0){return {0,0};} 
  
  PII frac;
  
  if(0 /*输了找赢的，但是，赢了的相乘*/){
    if()
      sum -= k;
    return multi(dfs(stop,sum,k * 2,frac),frac0);
    //frac = pre_frac + 0.5;

  }
  else if(1) {
    sum += k;
    return (dfs(stop,sum,1,frac),frac0);
    
  }


  //return frac;
}







int main(){
  ll a,x,y,n,m;
  cin >> n >> m ;
  
  dfs(n+m,n,1,{1,1});

  /*
  a = 623902721;
  x = 3;
  y = 8;
  */

  //cout << y * a % mod << x;
  //((y * a ) % mod== x) 

  return 0;
}``
