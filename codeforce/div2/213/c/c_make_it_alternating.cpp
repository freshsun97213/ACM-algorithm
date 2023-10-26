#include<iostream>
#include<vector>
#define i64 long long
#define mod 998244353
using namespace std;

const int N =2e5+10;
i64 pp[N];
void init(){
    pp[0] = 1;
    i64 sum = 1;
    for(i64 i = 1;i < N;i ++){
        sum = (sum * i)%mod;
        pp[i] = sum ;
    }
}




int main(){
    int t;
    cin >> t ;
    init();
    while(t --){
        string s;
        cin >> s;
        s += '#';
        // vector<i64>a;
        i64 sum = 1,era = 0;
        i64 cnt = 0;
        for(int i =0 ;i < s.size();i ++){
            if(s[i] == s[i + 1]){
                cnt ++;
            }else{
                if(cnt > 0){
                    era += cnt;
                }
                cnt ++;
                sum = (sum * cnt)%mod;
                cnt = 0;
            } 
        }
        cout << era <<" " << (sum * pp[era])%mod << endl;
    }
    return 0;
}