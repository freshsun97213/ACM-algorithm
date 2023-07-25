#include<iostream>
#define ll long long


using namespace std;



int main(){
  ll a,i;
  cin >> a;
  for( i = a*10;i <= a*10 + 9;i ++){
    if( i % 7 == 0){cout << i;return 0;}

  }




  return 0;
}
