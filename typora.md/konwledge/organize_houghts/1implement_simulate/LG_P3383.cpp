#include<iostream>

#define endl '\n'
using namespace std;
const int  N =1e7+10;
int prime[N];

void pri(int n){
    int cnt = 1,x = 3;
    prime[1]=2;
    while(x <= n){
        int f = 1;
        for(int i = 1;i <= cnt;i++){
            if(x % prime[i] == 0){
                f = 0;
            }
        }
        if(f){prime[++ cnt] = x;}
        x ++;
    }
    // return 0;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q; 
    pri(n);
    int pos;
    while(q --){
        cin >> pos;
        cout << prime[pos] <<endl; 
    }



    return 0;
}