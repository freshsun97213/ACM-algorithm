#include<iostream>
#include<string>

using namespace std;
string s;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,q,a;
        cin >> n  >> a >> q;
        cin >> s;
        //int len = s.size();
        int sum = 0,cnt = 0,f =1;
        if(a >= n){cout <<"YES"<<endl;continue;}
        for(int i =0;i < q;i ++){
            if(s[i] == '+'){
                sum ++;
                cnt ++;
            }else{
                sum --;
            }
            if(sum + a >= n){
                cout <<"YES" << endl;
                f = 0;
                break;
            }
        }
        if(f){
            if(cnt + a < n ){
                cout << "NO" << endl;
            }else {
                cout << "MAYBE"<<endl;
            }
        }
    }





    return 0;
}