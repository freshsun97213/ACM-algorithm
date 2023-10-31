#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

#define i64 long long
#define vl vector<i64>

using namespace std;
/*https://codeforces.com/problemset/problem/1343/C*/

void solve(){
    int ne = 0;
    int n ;
    cin >> n;
    vl a(n);
    for(int i =0 ;i < n ;i ++){
        cin >>a[i];
    }
    i64 cnt = a[0],pre = a[0];
    if(a[0] < 0){
        ne = 1;
    }
    for(int i = 1;i < n ;i ++){
        if(ne && a[i] > 0){
            cnt += a[i];
            ne = 1-ne;
            pre = a[i];
        }else if(!ne && a[i] < 0){
            cnt += a[i];
            ne = 1-ne;
            pre = a[i];
        }else if(ne && a[i] < 0 && a[i] > pre){
            // if(a[i] > pre){
                cnt -= pre;
                cnt += a[i];
                pre = a[i];
            // }
        }else if((!ne) && a[i] > 0 &&a[i] > pre){
            // if(a[i] > pre){
                cnt -= pre;
                cnt += a[i];
                pre = a[i];
            // }
        }
    }
    cout << cnt  <<endl;
    // return 0;
}


int main(){
    int T;
    cin >> T;
    while(T --){
        solve();
    }

    return 0;
}