#include<iostream>
#include<vector>
#include<cmath>
#define i64 long long
#define vl vector<i64>
using namespace std;


// 杨辉三角的性质
//  要注意的是如果存在什么集合之类的和
// 假设 最大的集合元素个数是N
// 那么 每一个的集合元素的贡献值就是 2^(n-1)个


int main(){
    i64 x;
    vl a;
    while(cin >> x){
        a.push_back(x);
    }
    i64 n = a.size(),ans =0 ;
    i64 fx = pow(2,n-1);
    for(int i =0 ;i < n;i ++){
        ans += a[i] * fx;
    }
    cout << ans << endl;

}