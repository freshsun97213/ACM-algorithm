#include<iostream>
#include<climits>
#include<cmath>
#define i64 long long
#define int i64
#define de(x) cerr<<#x << " " <<x <<endl; 

using namespace std;

i64 ssum(i64 n,i64 x){
    if(x <= 0){return 0;}
    return ((2 * n - x + 1)*(x))/2;
}

i64 sum(i64 y){
    if(y <= 0){return 0;}
    return ((1 + y ) * y )/2;
}

i64 ggcd(i64 x,i64 y){
    if(y > x ){swap(x,y);}
    while(x % y){
        int t = x / y;
        x = x - y*t;
        if(x < y)swap(x,y);
    }
    return y;
 
}


void solve(){
    i64 n,x,y;
    // cin >> n >> x >> y;
    scanf("%lld%lld%lld",&n,&x,&y);
        i64 gg = ggcd(x,y);
        i64 g  = floor(n / ((x * y) / gg));//重复的个数;
        x = floor(n / x) - g;
        y = floor(n / y) - g;
        printf("%lld\n",ssum(n,x) - sum(y));
}

signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    i64 t;
    scanf("%lld",&t);
    while(t --){
        solve();
    }
    return 0;
}
// x 和 y的倍数会有重复的位子；

// i64 ggcd(i64 a,i64 b){
// 	i64 az=__builtin_ctz(a);
// 	i64 bz=__builtin_ctz(b);
// 	i64 z=min(az,bz);b>>=bz;
// 	while(a){
// 		a>>=az;i64 diff=a-b;
// 		az=__builtin_ctz(diff),b=min(a,b),a=abs(diff);
// 	}
// 	return b<<z;
// } 
