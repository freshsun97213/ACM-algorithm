#include<iostream>
#include<stack>
#include<string>


using namespace std;

int num(char s){
  if(s == '<'){return 1;}
  else if(s == '('){return 2;}
  else if(s == '['){return 3;}
  else if(s == '{'){return 4;}
  else if(s == '>'){return -1;}
  else if(s == ')'){return -2;}
  else if(s == ']'){return -3;}
  else if(s == '}'){return -4;}
  else{return 0;}
}

bool enter(int a,int b){
  if(a  == 0 && b > 0){return true;}
  if(a >= b && b > 0){return true;}
  else{return false;}
}


int main(){
  int n,l;
  cin >> n;
  while( n --){
    string s;
    cin >> s;
    l = s.size();
    stack<int> a;
    for(int i = 0;i < l;i ++){
      if(enter(num(a.top()),s[i])){
        a.push(s[i]);
      }
      else if()

    }


    

  }
    
    
    
    
  return 0;
}





// #include<iostream>
// #include<stack>
// #include<string>
//
// #define debug(x) cerr << #x << " "<< x <<endl; 
//
//
// using namespace std;
// bool e(char c){
//   if(c == '{' || c == '[' || c == '(' || c== '<'){return true;}
//   else {return false;}
// } 
//
// bool e1(char c,char a){
//   
//   if(c == '{'){
//     if(a != '{'){return false;}
//   }
//   else if(c == '['){
//     if(a != '{' && a != '['){return false;}
//
//   }
//   else if(c == '('){
//     if(a == '{' || a == '[' || a == '(')
//       {return true;}
//     else{return false;}
//   }else{
//   return true;}
// }
//
// bool c(char c,char a){
//   if(c  == '(' && a==')'){return true;}
//   else if(c == '{' && a=='}'){return true;}
//   else if(c == '[' && a ==']'){return true;}
//   else  if(c == '<' && a == '>'){return true;}
//   else {return false;}
// }
//
//
// int main(){
//   int T;
//   cin >> T;
//   string s;
//   while(T --){
//     cin >> s;
//     int len = s.size();
//     stack<char> a;
//     if(e(s[0])){a.push(s[0]);}
//     else{puts("NO");continue;}
//     int k = 1;
//     for(int i =1;i < len ;i ++){
//       debug(a.top()) ;
//
//       if(e(s[i] && a.empty())||(e(s[i] && e1(s[i],a.top())) ) ){
//         a.push(s[i]);
//       }
//       //else if(e(s[i])){puts("NO");k=0;break;
//       else if( !a.empty() && !e(s[i]) ){
//         if(c(a.top(),s[i])){a.pop();}
//       }
//       else{puts("NO");k = 0;break;}
//       
//     }
//     if(a.empty() && k){puts("YES");}
//     else if( k ){puts("NO");}
//
//   }
//
//
//
//
//
//   return 0;
// }
