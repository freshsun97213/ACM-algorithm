#include<iostream>

using namespace std;
int dir[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};
int a[100][100];


int main(){
    int n;
    cin >> n ;
    int r=1,c=n,cnt = 0;
    for(int i = 1;i <= n*n ;i ++){
        cout << i << endl;
        a[r][c] = i;
        int nr = r + dir[cnt % 4 ][0];
        int nc = c + dir[cnt % 4 ][1];
        if(a[nr][nc] == 0 && nc <= n && nc >= 1&&nr >=1 && nr <= n){}
        else{cnt ++;}
        r = r + dir[cnt% 4][0];
        c = c + dir[cnt % 4 ][1];
        cout << r <<" " << c <<endl;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n ;j ++){
            printf("%4d",a[i][j]);
        }
        cout << endl;
    }
    return 0;
}

