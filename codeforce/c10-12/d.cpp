#include<iostream>
#include<map>
#include<vector>
#define de(x) cerr<<#x <<" "<<X <<endl;
#define i64 long long

using namespace std;
const int N = 1e6+10;
int bpri[N];
vector<int>a;
void init(){
    bpri[0]=1;
    bpri[1]=1;
    for(int i = 2 ;i < N ;i ++){
        if(!bpri[i]){
            a.push_back(i);
            bpri[i] =1;
            // for(int j = 0 ;j < a.size();j ++){
            //     bpri[a[j] * i] = 1;
            // }
        }
        for(int j = 0 ;j < a.size() && a[j] * i < N;j ++){
                bpri[a[j] * i] = 1;
            if(i % a[j] == 0){
                break;
            }
        }
    }
}


int main(){
    int t;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >>t ;
    init();
    while(t --){
        int n;
        map<i64 ,i64>mp;
        cin >> n;
        for(int i = 0;i < n;i ++){
            int b,cnt = 0;
            cin >> b;
            // if(b == 1)mp[1] ++;
            while(b > 1 && cnt < a.size()){
                if(b % a[cnt] == 0){
                    mp[a[cnt]] ++;
                
                    b = b/a[cnt];}
                else{
                    // cout << mp[a[cnt]] <<" "<<a[cnt]<<endl;
                    cnt ++;
                }
                // cout << mp[cnt] <<endl;    
            }
            
            // cout << mp[a[cnt]] <<" "<<a[cnt]<<endl;
                    
            

        }
        // for(auto &x:mp){
        //        cout <<x.first<<" "<< x.second<<endl;
        //     }
        // if(sum % n == 0){
        //     cout << "YES";
        // }
            int  k = 0;
            for(auto &x : mp){
                // cout << x.second<<endl;
                if(x.second % n != 0){
                    k ++;
                }
            }
            if(!k){cout <<"YES"<<endl;}
            else{cout << "NO"<<endl;}
    }
    return 0;
}