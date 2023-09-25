#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t --){
    string s;
    cin >> s;
    if( s == "cab"|| s == "bca" ){
        cout << "NO" << endl;
    }
    else {cout << "YES" <<endl;}
    }
    return 0;
}