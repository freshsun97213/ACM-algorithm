#include<iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

int main(){
  int n,m;
  while(~scanf("%d %d",&n,&m)){
    //int cnt = 0;
    int x = -1;
    int f[2*n] = {0};
    //vector<int> v[2*n+1];
    int sum = 2*n;
    for(int i = 0;i < n;i ++){
      int cnt = 0;
      //int f[2*n]={0};
      //sum = 2*n;
      while(cnt < m){
        x = (x+1) % ( sum );
        
        if(!f[x]){cnt ++;}
        //将当次死掉的，和 过程中需要跳过的都弄好了;
        
      }
       f[x]=1;
    }
    for(int i = 0; i < 2*n;i ++){
      cout <<(f[i] ? 'B' : 'G');
    }
    cout << endl<<endl;

  }
    
    
    
    
    
    
  return 0;
}







// #include<iostream>
// #include<stack>
// #include<vector>
// #include<queue>
// #include<algorithm>
// #define debug(x)  cerr << #x <<" "<< x <<endl;
// using namespace std;
//
//
// int main(){
//
//   int n,m;
//   while(scanf("%d %d",&n,&m)){
//     
//     int sum = n + n;
//     vector<int> v(sum);
//     //v.clear();
//     //v.erase(v.begin(),v.end());
//     //for(auto i = v.begin();i != v.end();i ++){*i = 0;}
//
//     debug(v.size());
//     
//     int s = 0;
//     for(int i = 0;i < sum && s < n;i = ((i%sum)+ (m % sum))% sum ){
//       if(!v[i]) {
//         v[i] = 1;
//         s ++;
//         i ++;
//         sum -- ;
//       }
//     }
//     
//
//     for(auto &x : v){
//       cout << (x ? 'B':'G');      
//     }
//     cout <<endl<<endl;
//
//
//   }
//   return 0;
// }
//
//
