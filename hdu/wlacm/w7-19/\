#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
  string c;
  int k;
  cin >> c;
  stack < char > s;
  //while(cin >> c){
  for(auto &x : c){
    //if(c[x]  == ' '){break;}
    k = 1;
    if(x == '(' || x == '['){s.push(x);}
    else if(x == ']'){
      if(s.size() == 0){
        k = 0;
        puts("Wrong");
        break;
      }
      if(s.top() == '['){s.pop();}
      else{ k = 0;puts("Wrong");break;}
    }
    else if(x == ')'){
      if(s.size() == 0){
        k = 0;
        puts("Wrong");
        break;
      }
      if(s.top() == '('){s.pop();}
      else{k = 0;puts("Wrong");break;}
    }
  }
  if(s.empty() && k ){puts("OK");}
  else if(k){puts("Wrong");}



  return 0;
}


