#include<iostream>
#define de(x) cerr << #x << " "<< x<< " ";
#define ll long long
#define int ll
using namespace std;
const int N =100;
int dir[][2]= {{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}};
int x,y;
int dp[N][N];
int check(int a,int b){
    for(int i = 0;i < 8;i ++){
        if((a == x + dir[i][0] && b == y +dir[i][1] ) || (x== a &&b == y)){
            return 1;
        }
    }
    return 0;
}

signed main(){
    int xb,yb;
    cin >> xb >> yb >> x >> y;
    x ++;
    y ++;
    dp[1][1] = 1;
    for(int i = 1;i <= xb + 1;i ++){
        for(int j = 1;j <= yb + 1;j ++){
            if(!check(i + 1,j)){dp[i + 1][j] += dp[i][j];}
            if(!check(i, j + 1)) {dp[i][j + 1] += dp[i][j];}
            
        }
    }

    
    
    cout << dp[xb + 1][yb + 1]<<endl;
    return 0;

}