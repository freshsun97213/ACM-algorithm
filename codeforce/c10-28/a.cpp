#include<iostream>
#include<map>
#include<vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        map<int,int>mp;
        int a;
        for(int i =0 ;i < n ;i ++){
            cin >> a;
            mp[a] ++;
        } 

        if(mp.size() > 2){
            cout <<"NO"<<endl;
        }else if(mp.size() == 1){
            cout <<"YES"<<endl;
        }else{
            int a[2];
            int cnt = 0;
            for(auto x : mp){
                a[cnt ++] = x.second;
            }
            if(abs(a[0] - a[1]) > 1){
                cout << "NO" <<endl;
            }else{
                cout <<"YES"<<endl;
            }

        }


    }




} 