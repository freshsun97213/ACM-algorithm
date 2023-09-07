#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
const int N =1e5+10;
int num[N],iit[N];
string s;
int sum = 1,cnt = 0;
void init(){
    
    iit[0] = 2;
    for(int i = 3;i < N;i ++){
        int f = 1;
        for(int j = 0;j < sum;j ++){
            if(i % iit[j] == 0){f = 0;break;}
        }
        if(f){iit[sum ++] = i;}
    }
}

int check(int x){
    if(x <= 1){return 0;}
    for(int i = 0;iit[i] <= sqrt(x);i ++){
        if(x%iit[i] == 0){return 0;}
    }
    return 1;
}

void dfs(int q,int len,int x){
    if(len >= 2){num [cnt ++] = x;}
    for(int i = 1;i < 9;i ++){
        if(q + i >= 9){return ;}
        int xx = (s[q+i]-'0') + x * 10;
        len ++;
        dfs(q+i,len,xx);
        len --;
    }
}

//301 
// 1021 -- 1201都是质数，但是301不是 103却是
// 3开头的很多都很奇怪，
// 偶数开头的质数，按照轴旋转不是质数是很正常的，但是3为什么呢
// 1823 是 但是 3281不是

int main(){
    int t ;
    cin >> t;
    init();
    for(int i = 0;i < sum;i ++){
        cout << iit[i] << " ";
        if(i % 10 == 0)cout<<endl;
    }


    // while(t --){
       
    //     cnt = 0;
    //     cin >> s;
    //     // cout << s[0] -'0'<<endl;
    //     for(int i = 0;i < 9;i ++){dfs(i,1,s[0]-'0');}
    //     int f = 1;
    //     // cout << cnt <<endl;
    //     // cout << "s"<<sum<<endl;
    //     // for(int i =0;i < cnt;i ++){
    //     //     cout <<num[i] <<endl;
    //     // }

    //     for(int i= 0;i < cnt ;i ++){
    //         //cout << "a";
    //         if(check(num[i]) == 1){f = 0 ;cout << num[i] <<endl;break;}
    //     }
    //     if(f){cout <<"-1"<<endl;}
    // }




    return 0;
}