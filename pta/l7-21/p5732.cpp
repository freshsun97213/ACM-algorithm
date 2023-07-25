#include<iostream>
#define int long long

using namespace std;

int a[1000][1000];

int tra(int n,int m){
  //if(n == 1 || 1 == m){return 1;}
  if(a[n][m] != 0){return a[n][m];}
  else{ return tra(n-1,m-1) + tra(n-1,m);}
}



signed main(){
  int n;
  cin >> n;
  //a[1][1] = 1;
  //a[2][1] = 1;
  
  for(int i = 1;i <= n ;i ++){a[i][1] = 1;}

  for(int i = 1;i <= n;i ++){a[i][i] = 1;}

  for(int i = 2;i <= n;i ++){ 
    for(int j = 2;j <= i;j ++){
      a[i][j] = tra(i,j);
    }
  }
  for(int i = 1;i <= n;i ++){
    for(int j = 1;j < i;j ++){
      printf("%lld ",a[i][j]);
    }
    printf("%lld\n",a[i][i]);
  }


  return 0;
}
