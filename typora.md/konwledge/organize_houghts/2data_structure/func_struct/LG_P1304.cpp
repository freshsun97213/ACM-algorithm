#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
#define vi vector <int>
const int N =1e4+10;
int ff[N];
vi pri;
void init(){
    ff[1] = 1;
    for(int i = 2 ;i < N ;i ++){
        if(!ff[i]){
            pri.push_back(i);
        }
        for(int j = 0;j < pri.size() && pri[j] * i <= N ;j ++){
            ff[pri[j] * i] = pri[j];
            if(i % pri[j]==0){break;}
        }
    }
}


int ispri(int x){
    if(x <= 1){return 0;}
    for(int i =0 ;i < pri.size() && pri[i] <= sqrt(x);i++){
        if(x % pri[i] ==0){
            return 0;
        }
    }
    return 1;
}



int main(){
    init();
    int n ;
    cin >> n;
    vi a(n);
    /*  LG_P6736 */
    // for(int i =0 ;i < n ;i ++){
    //     cin >> a[i];
    //     if(ispri(a[i])){
    //         cout << a[i] <<" ";
    //     }
    // }


    /*   LG_P1304   */
    for(int i = 4;i <= n ;i +=2){
        for(int j = 0;j < pri.size()&&pri[j] < i;j ++){
            if(pri[j] && ispri(i -pri[j])){
                cout << i <<"="<<pri[j] <<"+"<<i-pri[j]<<endl;
                break;
            }
        }
    }
    return 0;
}