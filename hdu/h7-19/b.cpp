#include<iostream>
#include<stack>
#include<string.h>

using namespace std;

int main(){
  string s;
  int n ;
  cin >> n;
  char c = getchar(); 
  while(n -- ){
    stack <char> p;
    //char c = getchar();
    //getline(cin,s);
    getline(cin,s);
    //char c = getchar();
    //scanf("%[^\n]%*c",s);
    int len =  s.size();
    for(int i = 0 ;i <  len ;i ++){
      if(s[i] == ' '){
        while(!p.empty()){
          cout << p.top();
          p.pop();
        }
        cout << " ";
      }
      else{p.push(s[i]);}
    }
    while(!p.empty()){
      cout << p.top();
      p.pop();
    }
    
    cout << endl;
    
  }



  return 0;
}






/*              AC    */

// #include<iostream>
// #include<stack>
// #include<string.h>
//
// using namespace std;
//
// int main(){
//   char s[100000]={0};
//   int n ;
//   cin >> n;
//   char c = getchar(); 
//   while(n -- ){
//     stack <char> p;
//     //char c = getchar();
//     //getline(cin,s);
//     //getline(cin,s);
//     //char c = getchar();
//     scanf("%[^\n]%*c",s);  ==sacnf("%*C")==这个完全可以做到一种将空格直接舍弃的功效不用再开内存;
//     int len =  strlen(s);
//     for(int i = 0 ;i <  len ;i ++){
//       if(s[i] == ' '){
//         while(!p.empty()){
//           cout << p.top();
//           p.pop();
//         }
//         cout << " ";
//       }
//       else{p.push(s[i]);}
//     }
//     while(!p.empty()){
//       cout << p.top();
//       p.pop();
//     }
//     
//     cout << endl;
//
//   }
//
//
//
//   return 0;
// }
