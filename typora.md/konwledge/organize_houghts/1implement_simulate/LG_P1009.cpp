#include<iostream>
#define i64 long long
using namespace std;

const int N =1e5+10;

int a[N],ans[N];


int main(){
    int n ,p;
    cin >> n;
    for(p = n; p;p--){
        a[1] = 1;
        for(int i = 1;i <= p;i++){
            for(int j = 1;j <=100;j ++){a[j] *= i;}

            for(int j = 1;j <=100;j ++){
                if(a[j] >= 10){
                    a[j + 1] += a[j] /10;
                    a[j] =a[j] %10;}
            }
            // if(a[cnt] >= 10){
            //     a[cnt + 1] += a[cnt] /10;
            //     // cout << a[cnt + 1] << "  "<<p <<" " <<cnt<<endl;
            //     a[cnt] =a[cnt] %10;
            //     cnt ++;
            // }
        
        }
        for(int i = 100 ;i;i--){ans[i] += a[i];a[i] = 0;}
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