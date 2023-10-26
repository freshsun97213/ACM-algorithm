#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

#define i64 long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t --){
        i64 n;
        cin >> n;
        string s;
        cin >> s;
        // reverse(s.begin(),s.end());
        i64 ans = 0,l = 0,pos0 = n,ok = 1;
        for(int i = n-1;i >= 0;i --){
            pos0 --;
            while(pos0 >= 0 && s[pos0] == '1'){
                pos0 --;
            }
            if(pos0 < 0){
                ok = 0;
            }
            ans += (i-pos0);
            if(ok){
                cout << ans << ' ';
            }else{
                cout << -1 <<" ";
            }
 
        }
        cout << '\n';
    }
    return 0;
}