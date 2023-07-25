#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>

#define ll long long
#define debug(x) cerr << #x << x << endl; 
using namespace std;




int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  unordered_map<int,int>mp;
  int t,n;
  cin >> t;
  

  while(t --){
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i < n;i ++){
      ll s;
      cin >> a[i];
      mp[a[i]] ++;
    }
    
    /*for(auto & x : a){
      if(mp[x]){
        cout << x << " ";
      
      } 
    }*/
    vector<int >::iterator iter = a.begin();

    //unordered_map<int,int>::iterator iter = mp.begin();

    while(iter != a.end()){
      if(mp[*iter]){mp[*iter] = 0;cout << *iter <<" "; }
      iter ++;
    }

    cout << endl; 
      
      
      
  }
    
    
    
    
  return 0;
}















/* N <= 5 * 10e4  T <= 50  the number [0 ~ 32digits] the array can't memoary;  TLE         */



// #include<iostream>
//
// using namespace std;
// int a[10000100],b[10000100];
//
//
// int main(){
//   int n,t;
//   cin >> t;
//   while(t --){
//     cin >> n;
//     int cnt = 0;
//     a[10000100]={0};
//     b[10000100] = {0};
//     cin >> b[0];
//     a[0] = 1;
//     cout << b[0] << " ";
//     n = n-1;
//     while(n --){
//       int s;
//       cin >> s;
//       int k = 0;
//       for(int i = 0;i <= cnt;i ++){ 
//         if(b[i] == s){
//           k =1;
//           break;
//         }
//
//       }
//       if( !k ){
//         cout << s << " ";
//         b[++cnt] = s;
//         a[cnt] ++;
//       }
//       //if(a[b] == 1){cout << b << " ";}
//     }
//     cout << endl;
//
//   }
//
//
//   return 0;
// }
