#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(){
  deque<string> q;
  q.push_back("ccccc");
  cout << q.back()<<endl;
  q.push_front("111111") ;
  cout << q.front() << endl;
  cout << q.back() << endl;
  
  q.pop_front();
  cout << q.front() << endl;
  cout << q.size() << endl;
  cout << endl <<endl<<endl;
  int n = 2;
  while(n --){
    char s[1000];
    scanf("%[^\n]%*c",s);
    cout << s ;

  }
  return 0;
}



