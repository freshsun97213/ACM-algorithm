#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

#define i64 long long
#define vi vector<i64>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;
    vi a(n),s(n+1);
    for(int i = 0;i < n ;i ++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    s[0] = 0;
    for(int i = 0;i < n ;i ++)
        s[i+1] = a[i] + s[i]; 
    
    i64 ans = LLONG_MIN;
    for(int i = 0;i <= k ;i ++){
        ans = max(ans,s[n-i] - s[2*(k-i)]);
    }
    cout << ans <<endl;







    return ;
}



int main(){
    int t;
    cin >>t;
    while(t --){
        solve();
    }


    return 0;
}

// void solve(){
//     int n,k;
//     cin >> n>>k;
//     vi a(n);
//     i64 sum = 0;
//     for(int i = 0;i <n ;i ++){
//         cin >> a[i];
//         sum += a[i];
//     }

//     sort(a.begin(),a.end());

//     int mi1=0,mi2=1,mx1=n-1;
//     i64 mi = LLONG_MAX,res = 0; 
//     for(int i = 1;i <= k;i++){
//         res += a[n-i];
//     }
//     mi = min(mi,res);
//     for(int i = k;i;i --){
//         res -= a[n-i];
//         res += a[mi1] + a[mi2];    
//         mi = min(mi,res);
//         mi1 += 2;
//         mi2 += 2;
//     }

//     cout << sum - mi <<endl;
// }

