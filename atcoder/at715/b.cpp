#include<iostream>

using namespace std;

const int N = 1e5+10;
/*
struct product{
  int fucn;
  int money;
  int f[100];
}
*/

int f[N][110],c[N],p[N];

int main(){
  
  int n,m,prince,t = 0;
  cin >> n >> m;
  while(t < n){
    cin >>  p[t] >> c[t] ;
    int k =0 ;
    while( k < c[t]){
      cin >> f[t][k];
      k ++;
    }
    t ++;
  }

  //solve
  //
  //*
  int boo;
  for(int j = 0;j <  n;j ++){
    for(int i = 0;i <= n;i ++){
      if(i == j){continue;}
      if(c[j] < c[i] ){continue;}//第二个条件 产品功能和价格
      int k = 0;
      for(int p = 0;k < c[i] && p < c[j]; p ++ ){
        boo = 1;
        
        if(f[i][k] == f[j][p]){
          k ++;
        } 
        else if(f[i][k] < f[j][p]){boo = 0;break;}
      }
      if(boo &&  c[i] < c[j]){cout << "Yes";return 0;}
      if(boo && p[i] > p[j]){cout << "Yes";return 0;}
      int bo = 0;
      if (boo && bo){cout << "Yes";return 0;}
      
    }
  }
  cout << "No";
    

  return 0;
}

/*
    int boo;
for(int j = 0;j <  n;j ++){
    for(int i = j + 1;i <= n;i ++){
      if(c[j] < c[i] ){continue;}//第二个条件 产品功能和价格
      int k = 1;
      for(int p = 0;k < c[i] && p < c[j]; p ++ ){
        boo = 1;
        
        if(f[i][k] == f[j][p]){
          k ++;
        } 
        else if(f[i][k] < f[j][p]){boo = 0;break;}
      }
      if (boo){cout << "Yes";return 0;}
      
    }
  }
  cout << "No";
    
    
*/

