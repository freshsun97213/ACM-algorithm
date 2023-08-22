#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int n,m;
char mp[110][110];
int dir[][2] = {{1,0},{0,1},{-1,0},{0,-1}};
//找连通块
void DFS(int x,int y,int p){
    // cout << x << " " << y << endl;
    if(x < 0 || x >= n || y < 0 || y >= m){
        return ;
    }
    if(mp[x][y] == '-'){return ;}
    else if(mp[x][y] == 'B' ||mp[x][y] == 'W'){return ;}
    else if(p == 1){mp [x][y] = 'B';}
    else {mp[x][y] = 'W';}
    for(int i =0 ;i < 4;i ++){
        //if(mp[x + dir[i][0]][y + dir[i][1]] == '-'){}
        DFS(x + dir[i][0],y + dir[i][1], 1-p);
    //     if(p == 0){DFS(x + dir[i][0],y + dir[i][1], 1);}
    //     else {DFS(x + dir[i][0],y + dir[i][1], 0);}
     }
    // cout <<n <<m;
    return ;
}
int main(){
    cin >>n >> m;
    getchar();
    for(int i = 0 ;i < n;i ++){
        cin.getline(mp[i],110);
    }
    // for(int i = 0;i < n;i ++){
    //     for(int j = 0;j < m;j ++){
    //         printf("%c",mp[i][j]);
    //     }
    //     printf("\n");
    // }
    for(int i = 0 ;i < n ;i ++){
        for(int j = 0;j < m ;j ++){
            if(mp[i][j] == '.')DFS(i,j,0);
        }
    }
    //cout << n << m;
    for(int i = 0;i < n;i ++){
        //for(int j =0 ;;j <m)
            cout << mp[i];
        //for(int j = 0;j < m;j ++){
        //    printf("%c",mp[i][j]);
        //}
        printf("\n");
    }




    return 0;
}