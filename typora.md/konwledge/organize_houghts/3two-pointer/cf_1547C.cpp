#include<iostream>
#include<vector>
#define vi vector<int>
#define i64 long long
using namespace std;

/*https://codeforces.com/problemset/problem/1547/C*/


void solve(){
    i64 k,n,m,ok = 1;
    cin >> k >> n >> m;
    vi a(n),b(m),c;
    for(int i =0 ;i < n ;i ++){cin >> a[i];}
    
    for(int i =0 ;i < m ;i ++){cin >> b[i];}
    int i =0 , j=0;
    while(i != n || j != m){
        if(i != n && a[i] == 0){
            c.push_back(0);
            k ++;
            i ++;
        }else if(i!=n&& a[i] <= k){
            c.push_back(a[i]);
            i ++;
        }else if(j != m&& !b[j] ){
            c.push_back(0);
            j ++;
            k ++;
        }else if(j != m && b[j] <=k){
            c.push_back(b[j]);
            j ++;
        }else{
            cout << -1 <<'\n';
            ok = 0;
            break;
        }
    }
    if(ok){
        for(auto x : c){
            cout << x << " ";
        }
        cout <<'\n';
        // c.clear();
    }
    return ;
}


int main(){

    int t;
    cin >> t ;
    while(t --){
        solve();       
    }
    return 0;
}

/*      双指针里面 最好不要两个while循环嵌套
        因为里面和外面的循环 可能会导致 各种边界条件
        非常难调试
*/
// void solve(){
//     vi a,b,c;
//     int ok = 1,k,n,m,i = 0,j = 0;
//      输入
//     i = 0;
//     while(i + j < n + m && ok){
//         if(i < a.size()&&!a[i]){
//             k ++;
//             c.push_back(a[i++]);
//         }else if(i < a.size() && a[i] <= k){
//             c.push_back(a[i++]);
//         }else{
//             if(j < m && ok){
//             while(j < m && ok){
//                 if(j < b.size() && !b[j]){
//                     k ++;
//                     c.push_back(b[j++]);
//                 }else if(j < b.size() && b[j] <= k){
//                     // k ++;
//                     c.push_back(b[j++]);
//                 }else{
//                     ok = 0;
//                     break;
//                 }
//             }
//             }else{
//                 ok = 0;
//             }
//             if(!ok){break;}
//         }
//     }

