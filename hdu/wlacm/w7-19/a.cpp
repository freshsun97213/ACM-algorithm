#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
  
  
  stack<char> st;
  char c;
  //int len = s.size();
  while(cin >> c){
    if(c == '(' ){st.push(c);}
    else if(c == '@'){
      if(st.size() == 0){puts("YES");break;}
      else{puts("NO");break;}
    }
    else if(c == ')'){
      int k = 1;
      while(k){
        if(st.size() == 0){puts("NO"); k = 0;return 0;}
        if(st.top() == '('){
          st.pop();
          k = 0;
        }
      }

    }
  } 
  return 0;
}
