#include<iostream>
#define i64 long long
using namespace std;


i64 func(i64 x){
    if(x == 1){
        return 1;
    }
    return func(x-1) * x;
}



int main(){
    i64 x;
    cin >> x;
    cout << func(x);
}