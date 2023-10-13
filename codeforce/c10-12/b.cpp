#include<iostream>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;
#define eps 1e-16
int sum(int x,int ans){
    return (x / ans)-1;
}


signed main(){
    int a,b,c,t;
    cin >> t;
    while(t --){
        cin >> a >> b >> c;
        int x1,x2;
        x1 = __gcd(a,b);
        x2 = __gcd(x1,c);
        int cnt = 0;
        cnt += sum(a,x2);
        cnt += sum(b,x2);
        cnt += sum(c,x2);
        // cout <<cnt;
        if(cnt > 3){
            cout << "NO"<<endl;
        }else{
            cout <<"YES" <<endl;
        }
    }

    return 0;
}