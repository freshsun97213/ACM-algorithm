#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
#include<map>
#define i64 long long
static const i64 mod =  1e9+7;
using namespace std;
const int N =2e5+10;
i64 fact[N],x,y;
void init(){
    i64 sum = 1;
    fact[1] = 1;
    fact[0]=1;
    for(i64 i = 2;i <= N;i ++){
        fact[i] = (sum * i) % mod;
        sum  = fact[i];
    }
}

i64 C(i64 n,i64 m){
    // (n-m)
    return (fact[n] / (fact[m] * (fact[n-m])))%mod;
}


int main(){
    i64 n ;
    init();
    cin >> n >> x >> y;
    int cou = 0;
    for(int i = 0;i < n ;i ++){
        int a,b;
        cin >> a >> b;
        (a >= x && b <= y)? cou +=1 : cou += 0;

    }
    i64  sum = 0;
    //cin >> cou ;
    for(int i = 1;i <= cou;i ++){
        sum = (sum + C(cou,i))%mod; 
        // cout << sum <<endl;
    }
    // (cou % 2) ? sum = (sum + C(cou,cou/2+1))%mod : sum += 0; 
    cout <<  sum <<endl;

    return 0;
}