#include<iostream>
#include<vector>
#define vi vector<int>
#define i64 long long
using namespace std;

void solve(){
    i64 k,n,m,ok = 1;
    cin >> k >> n >> m;
    vi a(n),b(m),c;
    for(int i =0 ;i < n ;i ++){cin >> a[i];}
    
    for(int i =0 ;i < n ;i ++){cin >> b[i];}
    int i =0 , j=0;
    while(ok && (i < n || j < m)){
        ok = 1;
        while(i < n){
            if(!a[i]){
                k ++;
                ok ++;
                c.push_back(a[i++]);
            }else if(a[i]<= k){
                c.push_back(a[i++]);
            }else{
                if(ok == 1){
                    ok = 0;
                    break;
                }
            }
        }
        while(j < m){
            if(!b[j]){
                k ++;
                ok ++;
                c.push_back(b[j++]);
            }else if(b[j]<= k){
                c.push_back(b[j++]);
            }else{
                if(!ok){
                    ok = 0;
                    break;
                }
            }
        }
        if(!ok){
            cout << "-1" <<endl;
            return ;
        }
    }
    if(ok){
        for(auto x : c){
            cout << x <<" ";
        }  
        cout << '\n'; 
    }



    return ;
}


int main(){

    int t;
    cin >> t ;
    while(t --){
        solve();       
    }
    return 0;
}