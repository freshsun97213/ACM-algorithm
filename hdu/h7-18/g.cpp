#include<iostream>

using namespace std;
int score[100010][110];

struct node{


}score


int main(){
  int n,m,a,b;
  cin >> n >> m >> a >>b;
  int mymax =0;
  for(int i = 1;i <= a ;i++){
    for(int j = 1;j <= n;j ++ ){
      cin >>score[i];
    }
  }

  for(int i = 1;i <=a;i++ ){
    
    for(int j = 0;j < n ;j ++){
      if(b == i && score[i][mymax] < score[i][j]){ mymax = j;}
    }
  }

  return 0;
}





