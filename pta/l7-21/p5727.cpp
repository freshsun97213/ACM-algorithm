#include<iostream>
#include<stack>


using namespace std;
int is(int a){
  if(a % 2 == 1){return 1;}
  else{return 0;}

}


int main(){
  stack<int> q;
  int n ;
  cin >> n;
  q.push(n);
  while(n != 1){
    if(is (n) ){n = n*3 +1;}
    else{n = n / 2;}
    q.push(n);
  }
  while (q.size() != 1) {
    cout << q.top() << " ";
    q.pop();
  }
  cout << q.top();
  return 0;


}
