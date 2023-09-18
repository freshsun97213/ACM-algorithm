#include<iostream>
#include<utility>
#include<vector>
#define ll long long
using namespace std;
const int N =3e4+10;
vector<pair<ll,ll> > a(N);
int main(){
    ll k,m,n,f = 0;
    cin >> k >> m >> n;
    for(int i = 1;i <= m;i ++){
        int a,b;
        cin >> a >> b;//当出现除法的时候，一定要注意除数是不是零
        if((a == 0 && b != 0) || k / a * b >= n){
            cout << i << " ";
            f ++;
        }
    }
    if(!f ){cout << "-1";}
    return 0;
}