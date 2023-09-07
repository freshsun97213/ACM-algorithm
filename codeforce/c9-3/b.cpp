#include<iostream>
#include<map>
#define ll long long
using namespace std;
const int N = 1e5+10;

int a[N],b[N],c[N],d[N];

map<ll,ll>mpx;
map<ll,ll>may;

// 首先是有 N！/ 重复的个数的阶乘 种 X 和 Y ，
//所求的是有有多少中 p，q 



// gcd == 所有的相同的质因数  和 所有的相同的

// 那就是 求出所有X  Y
// Y >= X 的 是可行解，
// 然后他们的  质因数拆解 之间的个数差的全排列、
// 就是最终的答案 


int main(){
    int n,m;
    cin >> n;
    for(int i = 0;i < n ;i ++){cin >> a[i];}
    for(int i = 0;i < n ;i ++){cin >> b[i];mpx[a[i]] = b[i];}
    int g = 0;
    cin >> m;
    for(int i = 0;i < m ;i ++){
        cin >> c[i];
        if(mpx[c[i]] != 0){g ++;}    
    }
    for(int i = 0;i < m ;i ++){
        cin >> d[i];
        may[c[i]] = d[i];
    }
    if(g != n && g != m){cout <<0<<endl;return 0;}
    int sum = 0;
    if(n <= m){
        for(auto x : may){
            if(mpx[x.first] == x.second){
                
            }
        }
    }




    return 0;
}