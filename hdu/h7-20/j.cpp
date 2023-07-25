#include<iostream>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<stack>
#define debug(x) cerr << #x << " " << x <<endl;

using namespace std;

int main(){
  int n ;
  cin >> n;
  //string s;
  //map<string,int> a;
  map<string,int>mp;
  while(n --){
    //map<string,int> mp;
    stack<char> h;
    string s,m,rs;
    cin >> s;
    int len = s.size();
    for(int i =0;i < len;i ++){h.push(s[i]);}
    //h.clear();
    for(int i = 0;i < len;i ++){
      //m = h.back();
      rs += h.top();
      h.pop();
  //    debug(rs);
    }


    if( mp.end() == mp.find(s) && mp.end() == mp.find(rs)){
      mp[s] = 1;
    }
     
    //cout << mp.size()<< endl;
  }
  
  //for(auto &x : mp){cout << x.first;}
  //cout << endl;
  cout << mp.size() <<endl; 
  return 0;
}

