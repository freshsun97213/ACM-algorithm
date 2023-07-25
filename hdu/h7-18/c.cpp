#include<iostream>


using namespace std;

struct stu{
  char name[10];
  int a;
  int b;
  int c;
  int sum;
}s[100000];


int main(){
  int n,maxi=0;
  cin >> n;
  int t = 0;
  while(t < n){
    cin >> s[t].name >> s[t].a >>s[t].b >>s[t].c;
    s[t].sum = s[t].a+s[t].b+s[t].c;
    if(s[maxi].sum <s[t].sum ){maxi = t;}
    t ++;
    //debug()
  }
  cout << s[maxi].name << " "<< s[maxi].a << " "<<s[maxi].b<<" " <<s[maxi].c <<endl;

}
