#include<iostream>
#include<utility>
#include<vector>
#include<cstring>
#include<string>
#include<climits>
#include<limits>
using namespace std;
const int N = 1e5+10;
int n,l;
int tree[N],init[N],sum;

// 对于树状数组，线段树这些码量很大的程序来说
// 我 很难去做到，快速的写出来
// 我认为这并不是由于，不够熟练的原因
// 大概率和我自己没有完全理解这个算法有关系
// 没有理解其中的内在逻辑上的联系
// 导致对于其记忆性很差，几乎都快忘记，有什么了
// 并且，我在写代码的时候，会有逻辑不清晰的问题
// 我觉得现在还是该练一练怎么样能把题目的逻辑书写
// 下俩，直面并且纸面化
// int lowbit(int x){
//     return x&-x;
// }

// void in(){
//     for(int i = 1;i <= n;i ++){
//         int j = i;
//         for(;j <= n;j +=lowbit(j)){
//             init[j] += 1;
//         }

//     }
// }
// int query(int x){
//     int sm = 0,ssm = 0;
//     for(x >= 0 ;x -=lowbit(x)){
//         sm += tree[x];
//         ssm += init[x];
//     } 
//     return ssm >= sm;
// }
// void update(int x,int y,int p){
//     for(int j = x;j <= y ;j ++){
//         int i = j;
//         for(;i <= n;i+=lowbit(i)){
//             if(p  )sum ++;
//             else if(!p  ){tree[i] --;} 
//         }
//     }
// }




int main(){
    cin >> l >> n;
    //memset(init,1,sizeof init);
    // in();
    // int x,y,op;
    // for(int i = 0;i < n ;i ++){
    //     cin >> op >> x>> y;

    // }
    cout << numeric_limits<int>::min()+1;
    int a=numeric_limits<int>::min();
    cout << a <<" " << -a <<endl;//会不大
    cout << CHAR_MAX<<endl;
    cout << LLONG_<<endl;

    return 0;
}