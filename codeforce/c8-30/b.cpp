#include<iostream>
#include<stack>
#include<cstring>
#include<queue>
#include<vector>
#define int long long
using namespace std;
const int N =1e5+10;
// 操作 ： 选择数字X
// 不改变小于x的p数列的数字的顺序 写下
// 不改变其顺序，将大于等于x的数列写下
// 将新序列 替代成原来的序列
// 再把大的放在小的后面

int a;
int q[N];
signed main(){
    int t;
    cin >> t;
    while(t -- ){
        int n,cnt = 0;
        cin >> n;
        memset(q,0,sizeof q);
        for(int i = 0;i < n;i ++){
            cin >> a;
            for(int j = 0 ;j <= cnt ;j ++){
                if(q[j] == 0){
                    cnt ++;
                    q[j]=a;
                    break;
                }else if(q[j] < a){
                    q[j] = a;
                    break;
                }
            }
        }
        cout << cnt <<endl;
    }
    return 0;
}

/*
6 
1 4 2 5 3 6
-1 -1 -1 -1 -1

*/


//不是逆序对

// #include<iostream>

// using namespace std;
// const int N=1e6+10;
// int tree[N],n;
// int lowbit (int x){
//     return x&(-x);
// }

// void add(int x,int v){
//     while(x <= n){
//         tree[x] += v;
//         x += lowbit(x);    
//     }
// }
// int sum (int x){
//     int ans= 0;
//     while(x){
//         ans += tree[x];
//         x -=lowbit(x);
//     }
//     return ans;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t --){
//         int ans = 0;
//         cin >> n;
//         for(int i = 0 ;i <= n;i ++){tree[i] = 0;}
//         for(int i = 1;i <= n ;i ++){
//             int v;cin >>v;
//             add(v,1);
//             ans += i - sum(v);
//         }
//         cout << ans  <<endl;    
//     }


//     return 0;
// }

