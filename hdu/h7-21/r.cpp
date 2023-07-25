#include<iostream>
#include<string>

using namespace std;

int main(){
  string s1,s2;
  while(cin >> s1 >> s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int cnt = 0;
    for(int i = 0;i < len1 ;i ++){
      for(int j = cnt;j < len2; j++ ){
        if(s1[i] == s2[j]){
          cnt = j+1;
          break;
        }
        else if(j == len2-1){cnt = -1;printf("No\n");break;}
      }
      if(cnt == -1){break;}
      else if(i == len1-1){printf("Yes\n");}
    }
    
    


  }



  return 0;
}


/*
 *
 *
 *
 *sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
 *
 *
 *
 *
 * */
