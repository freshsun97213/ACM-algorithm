#include<iostream>
#include<vector>
using namespace std;
const int N = 1e3+10;
int tree[N];

// int lowbit(int x){
//     return x & -x;
// }

// void update(int x,int p){
//     for(;x <= N;x += lowbit(x)){
//         tree[x] ++;
//     }
// }
// int query(int x){
//     int ans = 0;
//     for(;x;x-=lowbit(x)){
//         ans+=tree[x];
//     }
//     return x;
// }



int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i =0 ;i < n ;i ++){
        // int a;
        cin >> a[i];
    }
    for(int i =0 ;i < n ;i ++){
        int ans =0 ;
        for(int j = 0; j < i ;j ++){
            if(a[j] < a[i]){
                ans ++;
            }
        }
        cout << ans << " ";
    }



    return 0;
}