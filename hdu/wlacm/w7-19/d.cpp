#include<iostream>
#include<stack>
using namespace std;

int a[1010];

int main(){
  int n;
  cin >> n;
  for(int i = 1;i <= n;i ++){cin >> a[i];}
  stack <int> q;
  int k =1;
  for(int i = 1;i <= n;i ++){
    q.push(i);
    
    while( !q.empty() && a[k] == q.top()){
      k ++;
      q.pop();
    }


    //if(q.top()== a[k]){
      //q.pop();
      //k ++;
  

  }

  if(q.empty()){
    puts("YES");
  }
  else{puts("NO");}
  return 0;
}
