#include<stdio.h>
#include<iostream>
int a[3][3]={1};
//int b[3] = {1,1,1};
using namespace std;

int main(){
  int b[3]={1};
  for(int i = 0;i < 3;i ++){
    for(int j = 0;j < 3;j ++)
    cout << " " << a[i][j];
  }
  cout << endl;
  for(int i = 0;i < 3;i ++){
    cout << " "<< b[i];
  }

  return 0;
}
