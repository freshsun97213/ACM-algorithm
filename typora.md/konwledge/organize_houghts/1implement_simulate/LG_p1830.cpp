#include<iostream>
#include<utility>
#include<vector>
using namespace std;
const int N =110;
//这题数据量再大一点的话就需要进行二维签注和
vector<vector<pair<int,int> > >a(N,vector<pair<int,int> >(N,{0,0}));
void add(int x,int y,int n,int m,int k){
    for(int i = x;i <= n;i ++){
        for(int j = y;j <= m;j ++){
            a[i][j].first ++;
            a[i][j].second = k;
        }
    }
    return ;
}
void check (int x,int y){
    if(!a[x][y].first){
        cout << 'N' <<endl;
    }else {
        cout << "Y " << a[x][y].first <<" "<<a[x][y].second<<endl; 
    }
    return ;
}
int main(){
    int n,m,k,q;
    cin >> n >> m >> k >> q;
    int x1,x2,y1,y2;
    for(int i = 1;i <= k;i ++){
        cin >> x1 >>y1 >> x2 >> y2;
        add(x1,y1,x2,y2,i);
    } 
    for(int i = 0;i < q;i ++){
        cin >> x1 >>y1;
        check(x1,y1);
    }
    return 0;
}