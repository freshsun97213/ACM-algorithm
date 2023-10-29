#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#define i64 long long
#define vi vector<i64>
#define de(x) cerr << #x << "  " <<x << endl;

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi res;
    string ans = "01";
    // 0 1个数应该相同，否则no
    if(n%2 == 1){
        cout <<"-1"<<endl;
    }else{
        int a1 =0 ,a0 = 0;
        for(int i = 0;i < n;i ++){
            if(s[i] == '1'){a1 ++;}
            else{a0 ++;}
        }
        if(a1 != a0 ){cout << "-1" <<endl;return ;}
        
        int i = 0,j = n-1;
        while(i < j && res.size() <= 300){
            if(s[i] != s[j]){
                i ++;
                j --;
            }else if(s[i] == s[j] && s[i] == '1'){
                s.insert(s.begin()+i,ans.begin(),ans.end());
                de(s)
                res.push_back(i+1);
                j += 2;
                // i ++;
            }else if(s[i] == s[j] && s[i] == '0'){
                s.insert(s.begin()+j+1,ans.begin(),ans.end());
                de(s)
                // if(j == 7){return ;}
                res.push_back(j+1);
                j += 2;
            }
        }

        if(res.size() > 300){
            cout << "-1" <<endl;
        }else{
            cout << res.size() <<endl;
            for(auto x : res){
                cout << x <<" ";
            }
            cout << endl;
        }



    }
    
    
    // vi ans;



}








int main(){
    int T;
    cin >>T;
    while(T --){
        solve();
    }
    return 0;
}