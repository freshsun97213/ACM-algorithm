#include<iostream>
#define i64 long long

using namespace std;
const int N = 1e5+10;
int a[N];


int main(){
    int t;
    cin >> t;
    while(t --){
        int n,k,x;// k 是最小不存在的非负数
        // x是最大的数字 。n是数组的元素长度
        cin >> n >> k >> x;
        if(n >= k  && x >= k-1 ) {
            // i64 s = min(n-1,x);
            i64 sum = 0;
            sum = (k * (k-1) )/2;
            n = n - k;
            if(x != k)sum =sum + n * x;
            else{sum += n * ( x - 1 ); }
            cout <<  sum <<endl;
        }else{cout << -1 <<endl;continue;}
        

    }



    return 0;
}