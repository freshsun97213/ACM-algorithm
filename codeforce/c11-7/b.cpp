#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>

#define i64 long long
#define vi vector<i64>

using namespace std;

void solve(){
    i64 n;
    cin >> n;
    vi a(n);
    i64 num=0;
    map<i64 ,i64>k;
    int pre=-1,ppre=-1;
    for(int i = 0;i <n;i ++){
        cin >> a[i];
        k[a[i]]++;
        if(k[a[i]] == 2){
            num ++;
            if(pre == -1){
                pre = a[i];
            }else{
                ppre= a[i];
            }
        }
    }
    if(num <= 1  || k.size()<= 1){
        cout <<"-1" << endl;
    }else{
        int k12 = 1,k23 = 2;
        for(int i = 0;i < n ;i ++){
            if(a[i] == pre){
                k12 = 3-k12;
                cout << k12 <<" ";
            }else if(a[i] == ppre){
                cout << k23 <<" ";
                k23=5-k23;
            }else{
                cout << 1 <<" ";
            }
        }
        cout << endl;
    }
}



int main(){

    int t;
    cin >>t ;
    while(t --){
        solve();
    }








}