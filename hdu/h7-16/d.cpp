#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int n;
  while(~scanf("%d",&n)){
    int sum = 0;
    if(n == 0){break;}
    while(n --){
      int a;
      scanf("%d",&a);
      sum+=a; 
    }
    cout << sum << endl;
  }

  return 0;
}
