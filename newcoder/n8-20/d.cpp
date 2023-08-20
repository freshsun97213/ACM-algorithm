#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#define ll long long
using namespace std;
const int N =1e5+10;
typedef vector<vector<ll> > vl;
//ll a[N];
vector<pair<ll ,ll>> p(N);

bool cmp(const vector<ll>& a,const vector<ll>& b){
    return a.size() < b.size();
}
int main(){
    int n;cin >> n;
    vl vv;
    for(int i = 1;i <= n ;i ++){
        ll a;
        cin >> a;
        p[i].first = a;
        p[i].second = 0;
    }
    int ans = 0;
    for(int i =1;i < n;i++){
        int u,v;
        cin >> u >>v;
        if(vv[v].size() < 1)vv[v].push_back(v);
        if(vv[u].size() < 1)vv[u].push_back(u);
        vv[v].push_back(u);
        vv[u].push_back(v);
    }

    sort(vv.begin(),vv.end(),cmp);
    
    for(auto i = vv.begin();i < vv.size() ;i ++){
        for(int j = 1;j < i.size();j ++){
            if(p[vv[i][j]].second == p[vv[i][0]].second && p[vv[i][j]].first == p[vv[i][0]].first &&p[vv[i][0]].second == 0){
                ans += 2;
                p[vv[i][0]].second =1;
                p[vv[i][j]].second = 1;
            }
        }
    }
    cout << ans ;
    return 0;
}