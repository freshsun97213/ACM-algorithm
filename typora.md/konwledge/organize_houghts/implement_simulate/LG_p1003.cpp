#include<iostream>
#include<cstring>

using namespace std;

const int N =1e5+10;
int a[4][N];
int main(){
    int n;
    cin >> n;
    int x1,x2,y1,y2;
    //memset(a,-1,sizeof a);
    for(int i =1 ;i <= n ;i ++){
        cin >> a[0][i] >> a[1][i] >> a[2][i] >>a[3][i];
    }
    int x,y;
    cin >> x >> y;
    int ans = -1;
    for(int i = n;i >= 1;i --){
        x1 = a[0][i],x2=a[2][i],y1=a[1][i],y2=a[3][i];
        if(x1 <=x && y1 <= y&& x1 + x2 >= x && y1 + y2 >= y){
            cout << i << endl;
            return 0;
        }

    }
    cout << ans<<endl;;
        //cout << a[x][y] <<endl;


    return 0;
}