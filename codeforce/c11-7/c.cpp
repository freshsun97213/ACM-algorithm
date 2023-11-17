#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<queue>
#define i64 long long
#define vi vector<i64>

using namespace std;


void solve(){
    i64 n,k;
    cin >> n >> k;
    vi a(n);
    for(int i = 0;i < n ;i ++){
        cin >> a[i];
    }
    int x = n-1,f=1;
    for(int i = 0;i < k && i < n;i ++){
        if(a[x] > n){
            f = 0;
            break;
        }else {
            x = x + n - a[x];
            if(x >= n){x -= n;}
        }

    }
    if(f){
        cout <<"Yes" <<endl;
    }else{
        
        cout <<"No" <<endl;
    }


}


int main(){
    int t;
    cin >> t;
    while(t --){
        solve();
    }
    return 0;
}