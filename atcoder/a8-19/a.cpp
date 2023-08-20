#include<iostream>
#include<string>

using namespace std;
char c[] ={'a','e','i','o','u'};
int main(){

    string s;
    cin >> s;
    for(int i = 0;i < s.size();i ++){
        int f =1;
        for(int j = 0;j < 5;j ++){
            if(c[j] == s[i]){
                f = 0;
                continue;
            }
        }
        if(f)cout << s[i];
    }




    return 0;
}