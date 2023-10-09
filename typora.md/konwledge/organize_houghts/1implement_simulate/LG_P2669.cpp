#include<iostream>
#define i64 long long

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 1,cn = 1;
    i64 sum = 0;
    while(n --){
        sum += cnt;
        cn ++;
        if(cnt < cn){
            cnt ++;
            cn = 1;
        }
    }
    cout << sum ;



    return 0;
}