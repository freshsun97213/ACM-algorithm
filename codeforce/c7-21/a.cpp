#include<iostream>

using namespace  std;

int main(){
  int n,a,b,c;
  cin >> n;
  while(n --){
    cin >> a >> b >> c;
    if(a+b>= 10 || a+c >= 10 || b+c >= 10){printf("YES\n");}
    else{printf("NO\n");}
  }


  return 0;
}
