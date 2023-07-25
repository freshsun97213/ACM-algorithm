#include<iostream>

using namespace std;

struct node{
  char s;
  char a[1000];
  long long b;
}p[1010];


int main (){
  int n,m;
  cin >> n >> m;
  int  s = n+m;
  while(s --){cin >> p[s].a >> p[s].s >> p[s].b; }
  //while(m --){cin >> p[]}
  

  return 0;
}
