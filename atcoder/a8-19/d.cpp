#include<iostream>
#include<string>
#include<map>

using namespace std;
const int N = 2e3+10;
string s[N];
pair<char,int> ss[N][N];

map<char,pair<int,int> >mp;
map<int ,int>mmp;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i ++){
        cin >> s[i];
        for(int j = 0 ;j < m;j++){
            // if(mp[c[i]].first >= 1){mp[c[i]].first ++;}
            // else if(!mp[c[i]].first){mp[c[i]].first = 1;}
            if(mp[s[i][j]].first >= 1){
                ss[i][j].second = 1;
                ss[i][mp[s[i][j]].second].second  = 1;   
            }
            mp[s[i][j]].second = j;
            mp[s[i][j]].first ++;
            //cout << mp[c[i]].first << " ";
        }
        for(auto &x : mp){
            if(x.second.first == 1){
                mmp[x.second.second] ++;
            }
        }
        mp.clear();
    }
    int ans = 0;
    cout<<mmp.size()<<endl;
    for(auto &x : mmp){
        int j = x.second;
        for(int i = 0;i < n;i ++){
            if(ss[i][j].second != 1){
                mp[s[i][j]].first ++;
            }else{
                mp[s[i][j]].first = 2;
                cout << s[i][j] << endl;
            }
        }
        for(auto &x : mp){
            cout << x.first <<" ";
            if(x.second.first == 1){
                ans ++;
                //mmp[x.second.second] ++;
            }
        }
        cout << endl;
        mp.clear();
    }

    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cout << ss[i][j].second <<" ";
        }
        cout << endl;
    }

    cout << ans<<endl;


    return 0;
}