#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void solve(){
    int n,m;
    cin >> n>>m;

    string s1,s2;
    cin >> s1 >> s2;

    if(n <= 1 || (s1.find("00") == string::npos && s1.find("11") == string::npos)){
        cout << "YES"   <<endl;
    }else if(s1.find("00")!= string::npos && s1.find("11") != string::npos){
        cout <<"NO"<<endl;
    }else if(s1.find("00")!= string::npos || s1.find("11") != string::npos){
        if(s2.find("00")==string::npos&&s2.find("11")==string::npos){
        if(s1.find("00")!=string::npos){
            if(s2[0] == '1' && s2[m-1] =='1'){
                cout <<"YES" <<endl;
            }else{
                cout <<"NO"<<endl;
            }
        }else{
            if(s2[0] == '0' && s2[m-1] =='0'){
                cout <<"YES" <<endl;
            }else{
                cout <<"NO"<<endl;
            }
        }
        }else{
            cout <<"NO"<<endl;
        }
    }





    
}








int main(){
    int t;
    cin >> t;
    while(t --){
        solve();
    }



    return 0;
}