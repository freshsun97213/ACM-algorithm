#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
#include<queue>
#define debug(x) cerr << #x <<" "<<x <<endl;


const int N =2e5+10;
using namespace std;

int a[N];

int main(){
  //map<int,int>mp[N];
  queue<int>q;
  int t;
  cin >> t;
  //vector<p>a[n];
  while(t --){
    int n,k;
    cin >> n >> k;
    //int max = 0;

    for(int i = 1;i <= n;i ++){cin >> a[i];}
      
    sort(a,a+n+1);
    //debug(a[0]);
    //debug(a[1]);
    for(int i = n;i > 0;i --){a[i] = a[i] - a[i-1];}
    int max= 0,sum =0;
    for(int i = 1;i <= n;i ++){
      //debug(sum);
      if(a[i] <= k){
        sum ++;
        if(sum > max){max = sum;}
      }
      else{
        //debug(sum);
        if(sum > max){max = sum;}
        sum = 1;
      }
    }
    if(n == 1){max = 1;}
    cout << n - max << endl;


    /*for(int i = 0;i < n;i ++){
      q.push(a[i]);
      if(q.back() - q.front() > k){
        q.pop();
      }
      if(q.back()-q.front() <= k){
        if(max < q.size()){
           max = q.size();
        }
      }
      

    }
      while(!q.empty()){q.pop();}
      cout << n - max<< endl;
    
    */
    

  }






  return 0;
}
