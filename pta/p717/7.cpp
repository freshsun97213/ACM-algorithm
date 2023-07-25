#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int IsAutomorphic(long long x){
    if( x == 0){return 0;}
    return IsAutomorphic(x / 10) + 1;
}

int IsLowerPart(long long x,long long y){
    int a = IsAutomorphic(x);
    y = y % (long long)pow(10,a);
    if(x == y){return 1;}
    return 2;
}

int main(){
  long long x;
  cin >> x;

  cout << IsAutomorphic(x);

  return 0;
}
