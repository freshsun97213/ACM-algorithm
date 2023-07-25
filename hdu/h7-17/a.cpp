#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const int N =1000;

string s,s1;
//int a[N],b[N];

bool cmp(int a,int b){
  return a > b;
}


int main(){
  while(cin >> s >> s1){
    int a[N] = {0},b[N]={0};
    int len = s.size(),len1=s1.size();
    while(len --){ a[s[len]] ++;}
    while(len1 --){ b[s1[len1]] ++;}
    sort(a,a+1000,cmp);
    sort(b,b+1000,cmp);
    int k =1;
    for(int i = 0;a[i] != 0 || b[i] != 0; i ++){
      if(a[i] != b[i]){ k = 0;cout <<"NO" <<endl;break;}
    }
  if(k){ cout << "YES" <<endl;}
  }


  return 0;
}
