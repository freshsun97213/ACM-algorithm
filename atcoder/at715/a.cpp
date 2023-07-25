#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int d[N];

int main(){
  int n,p,q,min;
  cin >> n >> p >> q;
  min = p;
  while(n --){
    cin >> d[n];
    if(d[n]+q < min){min = d[n]+q;}
  }

  cout << min;
  return 0;
  

}
