#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int n,a,t;
  cin >> t;
  while(t --){
    cin >> n;
    int sum = 0;
    while(n --){
      cin >> a;
      sum += a;

    }

      cout << sum << endl<<endl;

  }
  return 0;
}


