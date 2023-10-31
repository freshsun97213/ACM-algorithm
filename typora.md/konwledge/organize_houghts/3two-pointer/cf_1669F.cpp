#include<iostream>
#include<vector>

#define i64 long long

#define vi vector<int>
using namespace std;

/*https://codeforces.com/problemset/problem/1669/F*/


void solve(){

    int n;
    cin >> n;
    vi w(n);
    for(int i = 0;i < n ;i ++)
        cin >> w[i];

    int r =n-1 ,l= 0,wr=0,wl=0;
    i64 sum = 0;
    while(r >= l){
        
        if(wr <= wl){
            wr += w[r];
            r --;
        if(wr == wl){
            sum = n-r-1 + l;
        }
        }else if(wr > wl){
            wl += w[l];
            l ++;
        if(wr == wl){
            sum = n-r-1 + l;
        }
        }
    }

    cout << sum << '\n';
}



int main(){
    int t ;
    cin >> t;
    while(t --){
        solve();
    }
    return 0;
}
