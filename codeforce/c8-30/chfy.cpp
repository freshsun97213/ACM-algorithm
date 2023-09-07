#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#define int long long
#define ll long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define nl tree[n].l
#define nr tree[n].r
#define gcd __gcd
using namespace std;
//#pragma GCC optimize(2)
const int maxn=1e6+50;
const int inf=1e18;
const int mod=998244353;
const int INF=2e18;
const double eps=1e-15;
//cout << setprecision(0) << f
int vis[maxn];
int a[maxn];
void solve()
{
   int n,k;
   cin>>n>>k;
   rep(i,0,n) vis[i]=0;
   rep(i,0,n-1)
   {
        cin>>a[i];
        vis[a[i]]++;
   }
   int ok;
   rep(i,0,n)
   {
        if(!vis[i])
        {
             ok=i;
             break;
        }
   }
   a[n]=ok;
   k%=(n+1);
   k=n-k;
   rep(i,k+1,n) cout<<a[i]<<' ';
   rep(i,0,k-1) cout<<a[i]<<' ';
   cout<<'\n';


}
signed main()
{
   ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   int __=1;

   cin>>__;

  while(__--)
  {
       solve();
  }
    return 0;
}