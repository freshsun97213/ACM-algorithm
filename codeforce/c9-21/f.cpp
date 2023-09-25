#include<iostream>
#include<algorithm>
#define de(x) cerr << #x << " " << x << endl;
#define i64 long long
using namespace std;
i64 n,k;
const int N =2e5 + 10;

i64 a[N],h[N];

// i64 lowbit(i64 x){
//     return x & -x;
// }
// void update(i64 x,i64 kk){
//     for(;kk < n;k += lowbit(kk)){
//         a[kk] += x;
//     }
// }

// i64 query(int x){
//     i64 sum = 0;
//     for(;x;x -= lowbit(x)){
//         sum += a[x];
//     }
//     return sum;
// }


// i64 query(int x,int y){return query(y) - query(x);}

// bool check(i64 pre,i64 nw){
//     int re = 0;
//     if(nw >= n){return 0;}
//     if(h[nw - 1] % h[nw] == 0){
//         (a[nw]-a[pre-1] <= k) ? re = 1 : re = 0; 
//     }else{
//         re = 0;
//     }
//     return re;
// }


int main(){

    int t;
    cin >> t;
    while(t --){
        
        cin >> n >> k;

        for(int i = 0;i < n ;i ++){
            cin >> a[i];  
        }
        for(int i = 0;i < n ;i ++){cin >> h[i];}
        i64 mx = 0,i = 0,j,tot = 0; 
        for( j = 0;j < n ;j ++){
            //i<= j 是为了将中间只有一个的情况下，将解能够运行；
            while(i < n && tot + a[i] <= k && (i <= j || h[i-1] % h[i] == 0) ){
                tot += a[i];
                i++;
            }
            mx = max(mx,(i64)i-j);
            tot -= a[j];
        }
        cout << mx << endl;
    }
    return 0;
}