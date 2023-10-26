#include<iostream>
#include<vector>

#define i64 long long

using namespace std;

i64 digit(i64 x){
    i64 ans = 0;
    while(x){
        ans += x %10;
        x/=10;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
     while(t --){
        i64 x,k;
        cin >> x >> k;
        i64 ans = digit(x);
        if(ans % k == 0){
            cout << x <<endl;
        }else{
            for(int i = 1 ;;i ++){
                if(digit(x + i) % k == 0){
                    cout << x + i << endl;
                    break;
                }
            }


            // if(x %10 + (k - (ans %k)) < 10){
                // cout << x + k - (ans%k) <<endl; 
            // }else{
            //     cout << x + 9 + k-(ans%k) <<endl;
            // }
        }
     }
    return 0;
}