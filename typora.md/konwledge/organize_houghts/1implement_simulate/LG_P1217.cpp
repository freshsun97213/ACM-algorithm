#include<iostream>
#include<cmath>
#define endl '\n'
using namespace std;
const int N =1e7+10;
int pri[N],cnt = 0,num[10];

bool palindrome(int x){
    int cn = 0;
    while(x){
        num[cn] = x %10;
        x /= 10;
        cn ++;
    }
    for(int i = 0;i < cn /2;i ++){
        if(num[i] != num[cn -i -1]){
            return 0;
        }
    }
    return 1;
}

bool ispri(int x){
    for(int i = 2;i <= sqrt(x);i ++){
        if(x% i == 0){return 0;}
    }
    return 1;
}

// void init(){
//     pri[0] =2;
//     for(int i = 3;i < N;i ++){
//         int f =1;
//         for(int j = 0;j <= cnt ;j++){
//             if(i % pri[j] == 0){
//                 f = 0;
//                 break;
//             }
//         }
//         if(f){pri[++cnt] = i;}
//     }
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // init();
    // cout << palindrome(3113) <<" "<<ispri(3113);
    int a,b;
    cin >> a >> b;
    // while(pri[be] < a){
    //     be ++;
    // }
    if(a % 2 == 0){a ++;}
    while(a <= b ){
        if(palindrome(a))if(ispri(a))cout << a <<endl;
        a +=2;
        if(a >= 1000 && a <= 9999){a = 10001;}
        if(a >= 100000 && a <= 999999){a = 1000001;}
        if(a >= 10000000 && a <= 99999999){a = 100000001;}
        
    }


    return 0;
}

