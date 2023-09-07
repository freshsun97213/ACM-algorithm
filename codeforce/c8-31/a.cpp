#include<iostream>
#include<cmath>
#include<map>
#define ll long long
#define int ll
using namespace std;
const int N =1e5+10;
map<int ,int>mp;
string s;
    
int prime[N];
int check(int x){
    int num[10];
    for(;x;x /=10){
        num[x%10] ++;
        if(num[x%10] >= 2){return 0;}
    }
    return 1;
}

void init(){
    int cnt = 1;
    for(int i = 3;i <= 987654321;i ++){
        int f  = 1;
        for(int j =0 ;j < cnt ;j ++){
            if(i % prime[j] == 0){
                f = 0;
                break;
            }
        }
        if(f){
            prime[cnt] = i;
            if(check(i)){
                mp[i] ++;
            }
        }
    }
    return ;
}
int dir[]={'1','2','3','4','5','6','7','8','9'};

void dfs(int len,int x){
    if(len >= 2 && mp[x] >= 1){
        cout << x <<endl;
        return ;
    }


}

int main(){
    int t;
    cin >> t;
    init();
    while(t --){
        cin >> s;
        int len = s.size();
        for(int i = len - 1;i >= 0;i --){
            if((s[i] -'0') % 2 == 0){len -= 1}
            else{break;}
        }
        int f = 1;
        for(int i = 0;i < len;i ++){
            


        }

}



    }




    return 0;
}