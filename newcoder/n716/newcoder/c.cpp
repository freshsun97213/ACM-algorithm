#include<iostream>
#include<cmath>
#define ll long long


using namespace std;

int main(){
  ll n,m,a,b;
  ll mmax=0,sum=0;
  scanf("%lld %lld %lld %lld",&n,&m,&a,&b);

  for(ll i = 0; i* 2 <= n &&i <= m;i ++){
    sum = i*a+min((n-i*2),(m-i)/2)*b;
    mmax = max(sum,mmax);
  }
  cout << mmax;
  
  return 0;
}

