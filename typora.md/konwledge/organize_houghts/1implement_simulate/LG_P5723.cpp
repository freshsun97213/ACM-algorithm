#include<iostream>

using namespace std;
const int N =1e8+10;
int pri[N],cnt = 0;

void init(){
    pri[0] =2;
    for(int i = 3;i < N;i ++){
        int f =1;
        for(int j = 0;j <= cnt ;j++){
            if(i % pri[j] == 0){
                f = 0;
                break;
            }
        }
        if(f){pri[++cnt] = i;}
    }
}



int main(){
    init();
    int n,sum = 0,i;
    cin >> n;
    for(i =0;sum <= n ;i ++){
        sum += pri[i];
    }
    for(int j = 0 ;j < i -1;j ++){
        cout << pri[j] <<endl;
    }
    cout << i-1 <<endl;


    return 0;
}