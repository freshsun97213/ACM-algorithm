#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  while(n --){
    int t = 0,sum = 0;
    cin >>t;
    while(t --){
      //int sum = 0;
      int a=0;
      cin >> a;
      sum += a;
    }
    cout << sum << endl;
  }


  return 0;
}


