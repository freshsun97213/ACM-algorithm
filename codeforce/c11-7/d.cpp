#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<queue>
#include<climits>
#define i64 long long
#define vi vector<i64>
#define all(x) x.begin(),x.end()
using namespace std;

void solve(){
    i64 n,m;
    cin >> n >> m;
    vi a(n),b(m);
    i64 mi = LLONG_MAX;
    for(int i = 0;i < n ;i ++){
        cin >> a[i];
        mi = min(a[i],mi);
    }

    for(int i = 0;i < m;i ++){
        cin >> b[i];
    }
    sort(b.begin() , b.end() , greater<i64>());
    vi c(n+m);
    merge(all(a),all(b),c.begin(),greater<i64>());
    for(int i =0; i < n +m ;i ++){
        cout << c[i] << " ";
    }
    
    
    // int i = 0,j=0;
    // for(;i < n && j < m;){
    //     if(a[i] <= b[j]){
    //         cout << b[j++] <<" ";
    //     }else{
    //         cout << a[i++] <<" ";
    //     }
    // }
    // while(i != n){
    //     cout << a[i ++] <<" ";
    // }


    // while(j != m){
    //     cout << b[j ++] <<" ";
    // }

     cout <<endl;
}


int main(){
    int t;
    cin >> t;
    while(t --){
        solve();
    }
    return 0;
}