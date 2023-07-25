#include<iostream>
//#include<>

int m[10][10];

using namespace std;

int main (){
  int n ;
  cin >> n;
  int sum = n*n;
  //for(int i = 1;i <= su,;i++){
  int s = 1;
  int x = 1,y = 0;
  while(s <= sum){  
    //int x = 1,y=1; 
    while(y < n  && !m[x][y+1]) {m[x][++ y] = s ++;}
    while(x < n  && !m[x+1][y]) {m[++x][y] = s ++;}
    while(y > 1 && !m[x][y-1]) {m[x][--y] = s ++;}
    while(x > 1 && !m[x-1][y]) {m[--x][y] =s ++;}
  }
  for(int i =1;i <= n;i ++){
    for(int j = 1;j <= n;j ++){
      printf("%3d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}


