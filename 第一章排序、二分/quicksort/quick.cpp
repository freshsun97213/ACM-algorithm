/* 
变化 ： 后产生了re  

*/












#include<iostream>

//这是优化后了的（双指针？）快速排序
using namespace std;

const int N = 1e6+10;

int n;
int q[N];

void quick_sort(int q[],int l,int r);

int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&q[i]);
    }
    quick_sort(q,0,n-1);
    for(int i = 0;i < n;i ++){
        printf("%d ",q[i]);
    }
    return 0;
}

void quick_sort(int q[],int l,int r){
    if(l >= r) return ;//如果没有这个终止条件 递归将永远进行下去
    
    int x =q[l];
    int i=l - 1,j=r + 1;
    while(i<j){
        do ++ i; while(q[i] < x);
        do -- j; while(q[j] > x);
        if(q[i] < q[j]){
            swap(q[i],q[j]);
        }
    }


    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
    //上下两个为何不同用一个 i 或者都用 j 的原因是
    /* MLE还有运行内存 超过限制 可能是由于 递归所开的实参和形参过多错
        是因为递归层次过深导致 无法返回 直接报错 MLE

    情况一：（q,l,i）和（q,j,r）    MLE和TLE都有
    当i和j相同时 会导致 最中间的数字 会被双方争夺


    情况二：(q,l,j-1) 和 (q,j,r)  MLE
    为何没有输出 显示memory limit exceed

    情况三：（q,l,j） he (q,j+1,r)会报错 RE runtime error 运行时错误

    segenamention falut 

    */
    
}
