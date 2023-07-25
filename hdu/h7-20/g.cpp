#include<iostream>
#include<map>
#include<set>
#include<string>
#include<string.h>

#define debug(x) cerr << #x << " " << x << endl;

using namespace std;

int main(){
  char s1[1000000];
  scanf("%[^\n]%*c",s1);
  while(s1[0] != '#'){
    set <string> s;
    int l = strlen(s1);
    int cnt = 0;
    string ans = "";
    for(int i = 0;i < l;i ++){
      string ans = "", sss="";
      
      if(s1[i] == ' ' /*|| i == l - 1 */){
        if(i - cnt == 0){cnt = i + 1;continue;}
        for(int j = cnt ;j < i;j ++){
          //s[j];
          ans += s1[j];
        }
        cnt = i+1;
        s.insert(ans);
        
      }
      else if(i == l - 1){
        
         for(int j = cnt ;j <= i;j ++){
          //s[j];
          ans += s1[j];
        }
        cnt = i+1;
        s.insert(ans);
        
      }
    
    }
   
    //debug(s.*begin());
    cout << s.size() << endl ;
    s.clear();
  
    scanf("%[^\n]%*c",s1);

  }
  return 0;
  
}
