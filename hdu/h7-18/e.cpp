#include<iostream>

using namespace std;

struct people{
  char name[1100];
  int a;
  int b;

}p[1000000];

int main(){
  int n,s = 0;
  cin >> n;
  while(s < n){
    cin >> p[s].name >> p[s].a >> p[s].b;
    p[s].a ++ ;
    if(p[s].b == 0 ){p[s].b = 0;}
    else{ p[s].b = p[s].b * 12 / 10;}
    if(p[s].b > 600){p[s].b = 600;}
    cout << p[s].name << " "<< p[s].a << " " << p[s].b<<endl;; 
    s++;
  }
  return 0;
}
