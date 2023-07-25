#include<iostream>
#include<string>
#define debug(x) cerr << #x << " "<<x <<endl;

using namespace std;
int s[110][110];

int main(){
  int n,d;
  //string c;
  cin >> n >> d;
  //while(n --){
  for(int i = 0;i < n ;i ++){
   // cin >> c;
    for(int j = 0;j < d;j ++){  
      char c;
      cin >> c;
      if(c == 'x'){s[i][j] = 0;}
      else{s[i][j] = 1;}
    }
  }
  int cnt = 1,max = 0,sum = 0;
  for(int i = 0;i < d ;i ++){
    cnt = 1; 
    for(int j = 0;j < n;j ++){  
      if(s[j][i] == 0){cnt = 0;} 
    }
    if(sum > max){max = sum;}
    if(cnt){sum ++;}
    else if(!cnt){sum = 0;}
  }
  if(sum > max){max = sum;}
  cout << max << endl;

  return 0;
}
