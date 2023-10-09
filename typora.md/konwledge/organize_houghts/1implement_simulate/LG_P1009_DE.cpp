#include<iostream>
#define i64 long long
using namespace std;
const int N =1e5+10;

int a[N],ans[N];


int main(){
    int n ;
    cin >> n;
    int cnt = 1,mx = 1;
    for(int p = n; p;p--){
        cnt = 1;
        a[1] = 1;
        for(int i = 1;i <= p;i++){
            for(int j = 1;j <=cnt;j ++){a[j] *= i;}

            for(int j = 1;j <100;j ++){
                if(a[j] >= 10){
                    a[j + 1] += a[j] /10;
                    a[j] =a[j] %10;}
            }
            // 由于可能在阶乘的期间，用cnt可能会导致一次进位好几十位置
            // 如果cnt不是最前面不唯零的位置，可能会导致超出cnt的位子
            // 的数值一直在被积压，导致最终爆掉int；50的阶乘开long long还可以承受这个
            // 进位积压
            // if(a[cnt] >= 10){
            //     a[cnt + 1] += a[cnt] /10;
            //     // cout << a[cnt + 1] << "  "<<p <<" " <<cnt<<endl;
            //     a[cnt] =a[cnt] %10;
            //     cnt ++;
            // }
        }
        mx = max(cnt,mx);
        for(int i = cnt ;i;i--){ans[i] += a[i];a[i] = 0;}
    for(int j = 1;j <= 100;j ++){
                if(ans[j] >= 10){
                    ans[j + 1] += ans[j] /10;
                    ans[j] =ans[j] %10;}
    }
        
    }
    int f = 0;
    
    for( f = 100;f> 0 && ans[f] == 0;f --){}
    // cout << f << endl;
    for(int i = f;i;i--){
        cout << ans[i];
    }




    return 0;
}