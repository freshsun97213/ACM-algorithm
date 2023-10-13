#include<iostream>
using namespace std;

int main(){
    int n,ans,f = 1,res = 0;
    for(int i = 1;i <= 12;i ++){
        ans += 300;
        cin >> n;
        ans -= n;
        if(ans < 0){
            cout << -i <<endl;
            f = 0;
            break;
        }
        res += (ans/100) *100;
        ans %= 100;  
    }
    if(f){
        cout << res*1.2 + ans <<endl;
    }



    return 0;
}
