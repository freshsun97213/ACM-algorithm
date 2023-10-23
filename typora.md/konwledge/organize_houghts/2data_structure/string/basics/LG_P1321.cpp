#include<iostream>
#include<map>

using namespace std;
map<char,int>mp;

int main(){

    string s;
    cin >> s;
    int boy = 0,girl =0;
    // for(auto x : s){
    //     if()
    // }
    for(int i = 0;i < s.size()-2;i ++){
        if(s[i] == 'b' || s[i+1] =='o'||s[i+2] =='y'){
            boy ++;
        }

    }
    for(int i = 0;i < s.size()-3;i ++){
        if(s[i] == 'g' || s[i+1] =='i'||s[i+2] =='r'||s[i+3]=='l'){
            girl ++;
        }
    }
    cout << boy <<endl <<girl<<endl;
    // int x = max(max(mp['b'],mp['o']),mp['y']);
    // int y = max(mp['g'],mp['r']);
    // y = max(y,mp['i']);
    // y = max(y,mp['l']);
    // cout << x<<endl;
    // cout << y << endl;
    return 0;
}