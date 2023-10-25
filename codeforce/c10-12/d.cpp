#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#define de(x) cerr<< #x <<" "<< X <<endl;
#define i64 long long

using namespace std;
const int N = 1e6+1;
int bpri[N];
vector<int>a;
void init(){
    bpri[0]=1;
    bpri[1]=1;
    for(int i = 2 ;i < N ;i ++){
        if(!bpri[i]){
            a.push_back(i);
            bpri[i] = i;
        }
        for(int j = 0 ;j < a.size() && a[j] * i < N;j ++){
            
            bpri[a[j] * i] = a[j];
            //如果这里更改一下
            //变成 bpri[a[j] * i] = i;
            // 答案就会有问题时为什吗？？？？

            if(i == a[j] ){
                break;
            }
        }
    }
}



int main(){
    int t;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    init();
    while(t --){
        int n;
        map<i64 ,i64>mp;
        cin >> n;
        for(int i = 0;i < n;i ++){
            int b;
            cin >> b;
            while(b > 1 ){
                int p = bpri[b];
                b /= p;
                mp[p] ++;
                // if(b % a[cnt] == 0){
                //     mp[a[cnt]] ++;
                
                //     b = b/a[cnt];}
                // else{
                //     cnt ++;
                // }
            }
        }
        int  k = 0;
        for(auto &x : mp){if(x.second % n != 0){k ++;}}
        if(!k){cout <<"YES"<< '\n';}
        else{cout << "NO"<< '\n';}
    }
    return 0;
}