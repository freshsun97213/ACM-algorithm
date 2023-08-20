#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#define ll long long
#define int ll
using namespace std;
const int N = 1e3;
struct staff{
    int a,b,c;
}s;
int dp[N];
map<string,staff> mp;
map<string,int>mmp;
signed main(){
    int m,n;
    cin >> m >> n;
    for(int i = 0;i < n;i ++){
        int a,b,c;
        cin >> a >> b >> c;
        string na;
        cin >> na;
        mp[na].a += a;
        mp[na].b  = b;
        mp[na].c  = c;
        mmp[na]   = 0;
    }
    for(int i = 1;i <= 21-m;i ++){
        string s;
        for(auto &x : mp){
            if(!mmp[x.first]){
                if(dp[i] < (int)(dp[i-1] + min(x.second.a,x.second.c)*x.second.b)){s = x.first;}
                dp[i] = max(dp[i] , (int)(dp[i-1] + min(x.second.a,x.second.c)*x.second.b));    
            }
            else {
                if(dp[i] < (int)(dp[i-1] + min( max( (ll)0,(ll)(x.second.a-x.second.c * mmp[x.first]) ), x.second.c)*x.second.b)){s = x.first;}
                dp[i] = max(dp[i] , (int)(dp[i-1] + min( max( (ll)0,(ll)(x.second.a-x.second.c * mmp[x.first]) ), x.second.c)*x.second.b)  );
            }
        }
        mmp[s] ++;
    }

    // for(int i = 0;i < 20;i ++ ){
    //     cout << dp[i] <<" ";
    // }
    cout << dp[21-m] <<endl;

    return 0;
}