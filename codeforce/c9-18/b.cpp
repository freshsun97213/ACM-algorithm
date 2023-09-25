#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring>

#define i64 int
// /#define i64 long long
using namespace std;
const int N =1e5+10;

int a[N],b[N],aa[40];

void ff(int x){
    for(int i = 1;x;i ++){
        if( x & 1){aa[i] ++;}
        x=x >> 1;
    }

}

int cmpless(int x,int p){
    int ans = 0;
    for(int i = 1;x;i ++){
        if((x&1) && aa[i] == (1-p)){ans += (1 << (i-1));}  
        x = x >> 1;
    }
    return ans;
}

int main(){
    i64 t;
    scanf("%d",&t);
    while(t --){
        memset(aa,0,sizeof aa);
        i64 n,m;
        scanf("%d %d",&n,&m);
        int x1 = 0,x=0;
        for(int i =0 ;i < n ;i ++){
            scanf("%d",&a[i]);
            x1 ^= a[i];
         }
        for(int i = 0;i < m;i ++){scanf("%d",&b[i]);}
        x = x1;
        for(int i =0 ;i < n ;i ++){
            if(n & 1){//奇数
               x |= b[i];  
            }else{
                x &= ~b[i];
            }
        }

        // int ans = 0;
        // for(int i = 1;i < 40;i ++){
        //     ans += (aa[i] << (i-1));
        // }
        // cout << ans<<"a  " ;
        // x = mm ^ ans;
        // cout << mm <<"mm"<<endl;

        if(!(n & 1)){printf("%d %d\n",x,x1);}
        else{{printf("%d %d\n", x1,x);}}

    }
    return 0;
}

        //for(int i = 0;i < 40;i ++){aa[i] %= 2;}
        // |或一下 所有数位上 全部都会 变成 n 个；
        // 如果n为偶数的话 求最小
        //所或的值所含有的 1的个数越多越好
        // 因为异或之后全部会消失 ，所以其最小值就是 权值最大的
        // 这个权值指的是 所在位数所代表的值
        // 最大值是不进行操作的时候

        // 当n为奇数的时候 求最大
        // 情况刚好相反 ，或1的位子越多 ，最后的结果越大
        // 最小的异或值就是不进行操作的时候

        // void init(){
//     aa[1] = 0,aa[2] = 1;
//     int x = 3,ans = 0;
//     for(int i = 0;i < 40;i ++){
//         if((x >> 1) & aa[i]) ans += 1 << (i-1);
//     }
//     cout << ans;

// }
