#include<iostream>
#include<string>
#define debug(x) cerr << #x <<" " << x << endl;

using namespace std;

string s,s1;




int main(){
  
  int round=0;
  
  while(cin >> round){
     if(round == -1){break;}
      int a[1000]={0},b[1000]={0};
      cin >> s >> s1;
      int len=s.size(),len1 = s1.size();
      for(int i = 0;i < len;i ++){a[s[i]] = 1;}
      for(int i = 0;i < len1;i ++){b[s1[i]] = 1;}
      int k = 1,cnt = 0;
      for(int i = 'a';i <= 'z';i ++){
        //debug(i);
      //debug(a[i]);
      //debug(b[i]);
        if(b[i] == 1 && a[i] != b[i]){
          k = 0;
          cnt ++;
          debug(cnt);  
        }
      }
      //debug(cnt);
      cout << "Round " << round << endl; 
      if(k){cout << "You win." << endl;}
      else if(!k && cnt < 7){cout << "You chickened out." << endl;}
      else if( cnt >= 7 && k == 0 ){cout << "You lose." << endl;}
      
      
//      cin >> round;
         if(round ==  -1){break;}
    }
  
  return 0;
}



