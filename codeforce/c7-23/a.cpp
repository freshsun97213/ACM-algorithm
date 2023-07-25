#include<iostream>
#include<cmath>
#define debug(x) cerr << #x << x << endl; 


using namespace std;
//const int N = 1e9 + 10;
//int a[N];

int main(){
  int t;
  cin >> t;
  while(t --){
    int n,a,b;
    cin >> n;
    int x,minn = 1e9+1;
    cin >> a;
    for(int i = 1;i < n;i ++){
      cin >> b;
      minn = min(minn ,b - a);
      a = b;
    }
    //debug()
    //for(int i = 0;i < n;i ++){
      //minn = min (minn,a[i] - a[i-1]);
    //}
    if(minn < 0)cout << "0" << endl;
    else if(minn == 0) cout << "1" << endl;
    else{cout << minn / 2 + 1 << endl; }
    //ceil((minn + 1.0 )/2 ) != 上面这个吗？？？？？

  }


  return 0;
}
