#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t --){
        int m,k,a1,ak;
        cin >> m >> k>> a1 >> ak;
         if(a1 == ak && a1==0){
             cout << m / k + m%k<<endl;
             continue; 
         }
        if(m < k && a1 <m){
            cout << m - a1 <<endl;
            continue;
        }
         if(a1 == m % k){
            if((m-a1)/ k - ak > 0){
            cout << (m-a1) / k - ak <<endl;}
            else{
                cout << "0"<<endl;
            }
        }else if(a1 > m % k){
            a1 = a1 - (m%k);
            m = m - (m % k);
            ak += a1/k;
            if(m/k -ak>=0){
                cout << m/k-ak <<endl;
            }else{
                cout <<"0"<<endl;
            }
        }else{
            int mx = max(0,m/k-ak);
            if(mx+ m%k - a1 > 0){
                cout << mx + m%k - a1<<endl;
            }
            else{
                cout <<'0'<<endl;
            }
        }
    }
    return 0;
}