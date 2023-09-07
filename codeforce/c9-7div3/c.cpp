#include<iostream>
#include<cstring>
#include<map>
#include<climits>
#include<cmath>
#define i64 long long

using namespace std;
const int N =1e4+10;
i64 d[N],s[N];
i64 cnt = 1;
void init(){
    
    d[0] = 2;
    for(int i = 3 ;i < N;i ++){
        int f = 0;
        for(int j = 0;j < cnt;j ++){
            if(i % d[j] == 0){f = 1;break;}
        }
        if(!f){d[cnt++] = i;}
    }
}

i64 isprime(i64 x){
    i64 i= 0;
    for(i = 0;i < cnt && d[i] <= sqrt(x);i ++){
        if(x % d[i] == 0){return d[i];}
    }
    return 0;
}

// 范围内可以拆解出一个偶数（>=4）都是对的
// 凡是奇数只能够分解为一鸡一偶
// 只要判断其中的奇数和偶数 是否互素
// 1、质数全部无解

void solve(){
    i64 l,r;
    cin >> l >> r;
    // if(r <= 3){cout <<"-1" <<endl;return ;}
    if(r - l >= 1 && r >= 4){
        if(r % 2 == 0)cout << "2" <<" " << r - 2 <<endl;
        else{cout << "2" <<" " << r - 1 - 2  <<endl;}
    }else{
        i64 x = isprime(l);
        if(l == r && x){
            cout << x <<" "<< l - x <<endl;
        }else{
            cout << "-1" << endl;
        }
    }

}



int main(){
    init();
    i64 t;
    // for(int i = 0;i < cnt && i <= 1000;i ++){
    //     cout << d[i] <<" ";
    //     if(i% 10 == 0){cout <<endl;}
    // }
    cin >> t;
    while(t --){
        
        solve();
    }





    return 0;
}
