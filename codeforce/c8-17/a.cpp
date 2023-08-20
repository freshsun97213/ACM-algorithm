#include<iostream>
#include<string>
#include<cstring>
#define int long long unsigned int
using namespace std;
string s;
signed main(){
    int t;
    cin >> t;
    while(t --){
        cin >> s;
        if(s == "()" &&s.size() == 2){
            cout << "NO";
        }else if(s.size()==2&&s==")("){
            cout <<"YES"<<endl;
            for(int i = 0;i < s.size();i ++){cout << '(';}
            for(int i = 0;i < s.size();i ++){cout << ')';}
        }else{
            cout << "YES"<<endl;
            int f= 0;
            for(int i = 1;i < s.size();i ++){
                if(s[i] == s[i-1]){
                    f ++;
                    break;
                }
            }
            if(f){
                for(int i = 0;i < s.size();i ++){cout <<"()";}
            }else{
                for(int i = 0;i < s.size();i ++){cout <<"(";}
                for(int i = 0;i < s.size();i ++){cout <<")";}
            
            }
        }
    cout << endl;
    }
    return 0;
}