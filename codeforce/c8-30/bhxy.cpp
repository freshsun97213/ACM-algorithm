#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cstring>
#include <cmath>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define ldb long double
using namespace std;
const int maxn=4e5+50;
const ll inf=0x7fffffffffffffff;
const ll mod=1e9+7;

void solve()
{
    ll n;
    scanf("%lld",&n);
    ll a[n];
    ll b[100010]={0};
    for(ll i=0;i<=n-1;i++)
    {
        scanf("%lld",&a[i]);
        b[a[i]]=i+1;
    }
    ll ans=n-1;
    for(ll i=1;i<=n-1;i++)
    {
        if(b[i+1]>b[i]) ans--;
    }
    printf("%lld\n",ans);
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        solve();
    }
    return 0;
}