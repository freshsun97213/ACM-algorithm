#include<iostream>
#include<queue>
#include<string>

using namespace std;


struct ac {
  int pri,id;
  bool  operator < (const ac &x,const ac &y){
    if(x.pri != y.pri ){return x.pri < y.pri;}
    else{return x.id > y .id;}
  } 

};




int main(){
  //priority_queue<int>q3;
  //string s;
  int n,cnt = 0;
  while(cin >> n){
    cnt = 1;
    priority_queue<ac> q[4];
    for(int i = 0;i < n;i ++){
      string s;    
      int a,b;
      cin >> s;
      cin >> a;
      if(s == "IN"){
        cin >>  b;
        q[a].push({b,cnt++});
        
      }
      else{
        if(!q[a].empty()){
          ac ans = q[a].top();
          
          q[a].pop();
          cout << ans.id << endl;
        }
        else{
          cout << "EMPTY" << endl;
        }
      }
      

    }
  }



  return 0;
}


