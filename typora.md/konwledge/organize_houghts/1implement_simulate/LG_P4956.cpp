#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int ans = n /52/7;
    //x + 3k = ans/7;
    
    if(ans<=103)cout << ans - 3<<endl<<1<<endl;
    else{
        if(ans%3 == 0){
            cout << 99 << endl << (ans-99)/3<<endl;
        }else if(ans % 3 == 1){
            cout << 100 << endl << (ans-100)/3<<endl;
        }else if(ans % 3 == 2){
            cout << 98 <<  endl <<(ans-98)/3<<endl;
        }

    }
    return 0;
}