#include<iostream>
#include<cmath>

#define debug(x)  cerr << #x << " "<<x <<endl;

using namespace std;
struct stu{
  char name[100];
  int c;
  int m;
  int e;
  int sum;
}st[1010];




int main(){
  int n;
  cin >> n;
  for(int i =0;i < n;i ++){
    //int m =4;
    //while(m --){
    cin >> st[i].name >> st[i].c>>st[i].m>>st[i].e; 
    st[i].sum = st[i].c+st[i].e+st[i].m;
    //debug(st[i].sum);
  }
  for(int i =0;i <= n-1;i ++){
    for(int j = i+1;j <= n;j ++ ){
      if(abs(st[i].c - st[j].c) <= 5 && abs(st[i].m-st[j].m) <= 5&&abs(st[i].e-st[j].e)<=5){
        if(abs(st[i].sum - st[j].sum) <= 10){

         // if(st[i].name > st[j].name){cout << st[j].name <<" "<< st[i].name <<endl;}
        cout << st[i].name <<" "<< st[j].name << endl;
        }
      }
    }

  }


  return 0;
}


