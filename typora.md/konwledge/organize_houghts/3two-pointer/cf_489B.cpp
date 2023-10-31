#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define vi vector<long>
#define i64 long long

using namespace std;

/*https://codeforces.com/problemset/problem/489/B*/

void solve(){
    i64 n;
    cin >> n;
    vi a(n);
    for(i64 i = 0; i < n ;i ++){
        cin >> a[i];
    }

    i64 m;
    cin >> m;
    vi b(m);
    for(i64 i =0 ;i < m ;i ++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    i64 i =0 ,j = 0,ans = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= 1){
            i ++ ,j ++;
            ans ++;
        }else if(a[i] > b[j]){
            j ++;
        }else {
            i ++;
        }
    }

    cout << ans <<endl;

}

int main(){

    // int T;
    // cin >> T;
    // while(T --){
        solve();
    // }
    return 0;
}