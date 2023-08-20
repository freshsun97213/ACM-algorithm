#include<iostream>
#include<map>
#include<string>
#include<cmath>

using namespace std;
const int N =1e6+10;
int s[N];
int main(){
    int n;
    cin >> n;
    map<int,pair<int,int> >mp;
    for(int i = 0 ;i < n;i ++){
        cin >> s[i];
    }


    for(int i = 0;i < n ;i ++){
        //int a ;
        //cin >> a;
        if(i!= 0 && i != n-1){
            mp[s[i]].first = s[i-1];
            mp[s[i]].second = s[i+1];
        }else if(i == 0){
            mp[s[i]].first = -1;
            mp[s[i]].second = s[i+1];
        }else{
             mp[s[i]].first = s[i-1];
            mp[s[i]].second = -1;
        }
    }
    int a,b;
    cin >> a >> b;
    if(mp[a].first == b || mp[a].second == b){
        cout << "Yes" <<endl;
    }else {
        cout << "No"<<endl;
    }






    return 0;
}