#include<iostream>
#include<vector>
#include<algorithm>
#define deb(x) cerr <<#x << " " << x << endl;
#define de(x) cerr << #x << " " << x << endl;
#define i64 long long
#define vi vector<i64>
using namespace std;

/*https://codeforces.com/problemset/problem/1656/B*/

/*

5 4
-16 2 5 9 11

18 21 25 27

-3 4 6
*/


void solve(){
    i64 n,k;
    cin >> n >> k;
    vi a(n),s(n+1);
    for(i64 i =0;i < n;i ++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    // for(int i = n-1 ;i ;i --){
    //     s[i] = a[i] -a[i-1];
    // }
    
    int i =0,j = 1,ok=0;
    
    if(n == 1){ok = (a[0] == abs(k));}
    else{
    while(!ok && i < n-1){
        while(j < n&& (a[j] - a[i] <= abs(k) || j <= i)){
            
            // deb(i)deb(j)de(a[j]-a[i])
            if(a[j]-a[i] == abs(k) ){
                ok = 1;
                break;
            }
            ++j;
        }
        i ++;
        if(ok){break;}
    }
    }
    cout << ((ok)?"YES":"NO")<<endl;
}

int main(){

    int T;
    cin >> T;
    while(T --){
        solve();
    }
    return 0;
}


