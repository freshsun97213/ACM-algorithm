#include<iostream>
#include<map>
#include<climits>

#define i64 long long
#define int i64
using namespace std;
const int N =2e5+10;
int a;
map<i64,i64>mp;

bool check(i64 h,i64 x){
    i64 sum = 0;
    for(auto &x : mp){
        if(x.first < h){
            sum += (h - x.first) * x.second;
        }
    }
    return sum <= x;
}



i64 binary_search(int x){
    i64 l=1,r = INT_MAX;
    while(l < r){
        int mid = (l + r + 1)/2 ;
        if(check(mid,x)){
            l = mid;
        }else{
            r = mid - 1;
        }
    }
    if( r < 1){r = 1;}
    return r;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t --){
        int n,x;
        cin >> n >> x;
        mp.clear();
        for(int i =0 ;i < n ;i ++){
            cin >> a;
            mp[a] ++;
        }
        cout << binary_search(x) << endl;
    

    }




}