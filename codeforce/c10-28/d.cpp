#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<climits>
#define il inline
#define endl '\n'
#define de(x) cerr << #x <<" " << x <<endl;
#define deb(x) cerr << #x <<" " << x << "  ";

#define i64 long long
using namespace std;
const int N =2e5+10;
i64 c;
struct node{
    i64 index,value;
    friend bool operator<(const node &a,const node &b){
        return a.index*c-a.value < b.index*c-b.value;
    }
}a[N];
il i64 read(){
	i64 x=0;
	char c=getchar();
	for(;!(c>='0'&&c<='9');c=getchar());
	for(;c>='0'&&c<='9';c=getchar())
		x=(x<<1)+(x<<3)+c-'0';//(x << 1) + (x << 3) == (x *= 10);
	return x;
}
void solve(){
    i64 n;
    n = read();
    
    c = read();
    // cin >> n >> c;
    for(int i = 1;i <= n ;i ++){
        a[i].value = read();;
        a[i].index = i;
    }
    
    sort(a+2,a+n+1);
    /*
10000
5 5 
1 10 15 20 25
    */
    for(int i =1 ;i <= n ;i ++){
        cout << a[i].index <<endl;
        // i64 k = a[i].index * c - a[i].value;
        // deb(k)deb(a[i].index);de(a[i].value)}
    }

    i64 sum = a[1].value,ok = 1,mi = a[1].index;
    for(int i = 1;i < n;i ++){
        sum += a[i+1].value;
        // deb(sum)
        if(sum < mi * a[i+1].index * c){
            // de(mi * a[i+1].index * c)
            ok = 0;
            break;
        }
        mi = min(a[i+1].index,mi);
    }
    if(!ok){
        cout << "NO" <<endl;
    }else{
        cout << "YES" <<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = read();
    // cin >>T;
    while(T --){
        solve();
    }
}