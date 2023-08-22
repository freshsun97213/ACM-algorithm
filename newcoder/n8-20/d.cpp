#include<iostream>

using namespace std;

int main(){
    





    return 0;
}




























// #include<iostream>
// #include<vector>
// #include<map>
// #include<utility>
// #include<algorithm>
// #define ll long long
// using namespace std;
// const int N =1e5+10;
// typedef vector<vector<ll> > vl;
// //ll a[N];
// vector<pair<ll ,ll>> p(N);

// bool cmp(const vector<ll>& a,const vector<ll>& b){
//     return a.size() < b.size();
// }
// int main(){
//     int n;cin >> n;
//     vl vv;
//     for(int i = 1;i <= n ;i ++){
//         ll a;
//         cin >> a;
//         p[i].first = a;
//         p[i].second = 0;
//     }
//     int ans = 0;
//     for(int i =1;i < n;i++){
//         int u,v;
//         cin >> u >>v;
//         if(vv[v].size() < 1)vv[v].push_back(v);
//         if(vv[u].size() < 1)vv[u].push_back(u);
//         vv[v].push_back(u);
//         vv[u].push_back(v);
//     }

//     sort(vv.begin(),vv.end(),cmp);
    
//     //vector的二维数组最好是有顺序的，因为如果是没有顺序的
//     // 如果是没有顺序的，我就只能够用auto去遍历了
//     // 就无法做到和int 和 char数组那样的效果了，
//     //也就是说，如果我需要，二位数组的行和列的下标的话，是在这样的二维vector做不到的
//     // 只能够，将vector更改成以结结构体为基础的

//     for(auto i = vv.begin();i < vv.size() ;i ++){
//         for(int j = 1;j < vv[i].size();j ++){
//             if(p[vv[i][j]].second == p[vv[i][0]].second && p[vv[i][j]].first == p[vv[i][0]].first &&p[vv[i][0]].second == 0){
//                 ans += 2;
//                 p[vv[i][0]].second =1;
//                 p[vv[i][j]].second = 1;
//             }
//         }
//     }
//     cout << ans ;
//     return 0;
// }