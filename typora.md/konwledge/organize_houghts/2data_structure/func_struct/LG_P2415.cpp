#include<iostream>
#include<vector>
#include<cmath>
#define i64 long long
#define vl vector<i64>
using namespace std;


// ������ǵ�����
//  Ҫע������������ʲô����֮��ĺ�
// ���� ���ļ���Ԫ�ظ�����N
// ��ô ÿһ���ļ���Ԫ�صĹ���ֵ���� 2^(n-1)��


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