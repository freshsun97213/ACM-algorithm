#include<iostream>
#include<string>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t --){
        int n,k,sum = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0 ;i < n;i ++){
            if(s[i] == 'B'){sum += 1;i += k - 1;}
        }
        cout << sum<<endl;


    }



    return 0;
}