#include<iostream>
#include<cmath>
#define de(x) cerr << #x << " "<< x<<endl;

using namespace std;
const int N = 1e3+30;
int mp[N][N];

void func(int x,int y,int n){
    if(n == 1){
        return ;
    }
    int mid = n/2;
    // de(mid);
    for(int i = x;i < x +mid;i ++){
        for(int j = y;j < y + mid ;j ++ )
            mp[i][j] = 1;
    }
    func(x+mid,y+mid,n/2);
    func(x+mid,y,n/2);
    func(x,y+mid,n/2);
}

int main(){
    int n;
    cin >> n;
    int k = pow(2,n);
    func(0,0,k);
    for(int i =0 ;i < k;i ++){
        for(int j =0 ;j < k;j ++){
            if(mp[i][j])cout <<"0 ";
            else{cout << "1 ";}
        }
        cout << '\n';
    }
    return 0;
}