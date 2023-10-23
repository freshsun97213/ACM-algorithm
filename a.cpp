#include<cmath>
#include<iostream>
#include<vector>
#include<map>

using namespace std;
const int N =5e6+10;
int f[N],ff[N];
vector<int>a,b;
void init(int k){
    f[0] = 1;
    f[1] = 1;
    ff[0] = 1;
    ff[1] = 1;
    for(int i = 2;i <= k;i ++){
        if(!f[i]){
            a.push_back(i);
            f[i] = 1;
        }
        
        for(int j = 1;j < a.size();j ++){
            f[a[j] * i] = a[j];
            ff[a[j] * i] =a[j]; 
            if(i == a[j]){
                break;
            }
        }
    }
}

// vector<vector<pair<int,int> > >pri;
map<int,int>mp;
int main(){
    int n,m,y;
    cin >> y >> n >> m;
    init(y);
    int t,cnt = 0;
    t = y;
    for(int i = 0 ;i < m;i ++){
        int s;
        cin >> s;
        b.push_back(s);
        
    }
    for(int i =0 ;i < b.size();i ++){
        while(t % b[i]== 0){
            mp[b[i]] ++;
        }
    }

    if(f[y] > 0){//prime
        double k = 1.0 * y / n;
         



    }

    





    return 0;
}