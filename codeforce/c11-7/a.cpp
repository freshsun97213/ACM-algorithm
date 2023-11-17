#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<string>
#define i64 long long
#define vi vector<i64>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t --){
        i64 n,x;
        cin >> n;
        // getchar();
        string s;
        cin >> s;
        // cout << s << "s" <<endl;
        // int x = s.size();
        if(s.size() != n){
            cout << "?" << endl;
            continue;
        }else if(n == 1){
            cout << s <<endl;
            continue;
        }
        int f=1;
        for(x = 2;x <= n && f;x ++){
            // if(!f){break;}
            i64 a=0,b=0,wina=0,winb=0,ok=-1;
            for(i64 p = 0;p < n ;p ++){
                if(s[p] == 'A'){
                    a ++;
                }else{
                    b ++;
                }
                if(a == x){
                    wina ++;
                    a = 0,b =0;
                    ok = 1;
                }else if(b == x){
                    winb ++;
                    a = 0,b =0;
                    ok = 2;
                }
            }
            if(a == 0 && b == 0 ){
                if(wina > winb && ok == 1){
                    f =0;
                    cout << "A" <<endl;
                    break;
                }else if(wina < winb && ok == 2) {
                    f =0;
                    cout << "B" <<endl;
                    break;
                }
            }
        }
        // if(f){cout <<"?" <<endl;}
    }
    return 0;
}