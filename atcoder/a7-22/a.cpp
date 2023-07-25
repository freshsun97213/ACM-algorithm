#include<iostream>
#include<queue>
#define debug(x)  cerr << #x << " "<< x << endl;
#include<string>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int fa = 0,fb =0 ,fc = 0,i = 0;
  while(!fa || !fb|| !fc ){
   // for(int i = 0;i < s.size();i ++){
      if(s[i] == 'A'){fa = 1;}
      else if(s[i] == 'B'){fb = 1;}
      else if(s[i] == 'C'){fc = 1;}
      i ++;


  }
  cout << i << endl;


  return 0;
}
