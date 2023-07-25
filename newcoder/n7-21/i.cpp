#include<iostream>

using namespace std;

bool isend(int x,int y){
  if(x % 2 == y % 2){return true;}
    
} 


int main(){
  int t;
  cin >> t;
  while(t --){

  int n,m;
  cin >> n >> m;
  int f[n+1][m+1]={0};

  for(int i =0 ;i <= n/2;i ++){
    for(int j = 0;j < m;j ++){
      if(isend(i,j))f[i][j] = 1;}
      else {f[i][j] = 0;}
    }
    for(int j = 0;j < m;j ++){
      if(isend(i,j))f[i][j] = 1;}
      else {f[i][j] = 0;}
    }

  }


  for(int i =0;i < n;i ++){
    for(int j = 0;j < m-1;j ++){
      if(f[i][j])printf("x");
      else{printf("o");}
    }
    if(f[i][m]){printf("x");}
    else{printf("o");}
  
  }
}
return 0;


}
