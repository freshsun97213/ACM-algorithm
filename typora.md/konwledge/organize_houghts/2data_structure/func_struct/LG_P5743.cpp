#include<iostream>
#define i64 long long

using namespace std;

i64 func(i64 n,i64 step,i64 ans){
    if(!n){return 1;}
    if(step == n){
        return (ans+1) *2;
    }
    return func(n,step+1,(ans + 1)*2);

}



int main(){

    i64 n;
    cin >> n;
    cout << func(n-1,1,1)<<endl;
    return 0;
}