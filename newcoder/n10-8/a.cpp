#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s,s1 = ""; 
    cin >> n >> s;
    s1 = s + s;
    s = "";
    int f = 1 ,cnt = 0,ans = 0;
    while(f){
        f = 0,cnt = 0;
        for(int i = 0;i < 2*n;i ++){
            if(s1[i] == s1[i + 1]){
                cnt ++;
                i ++;
                f = 1;
            }else{
                s += s1[i];
            }
            s1= s;
            s = "";
        }
        if(cnt % 2){ans += cnt / 2 + 1; }
        else {ans += cnt / 2; }
    
    }
    cout << ((ans > n) ? n : ans ) << endl; 

    return 0;
}





// #include<iostream>
// #include<string>
// using namespace std;
// const int N =1e5+10;
// int a[N];

// int main(){
//     int n;
//     string s;
//     cin >> n >> s;
//     int f = 1,i = 1,pre = 0,cnt = 0;

//     while(f){
//         f = 0;
//         while(i <= n){
//             if(s[pre] != s[i%n]){
//                 pre = i++;
//             }else{
//                 cnt += 2;
//                 a[pre] = 1;
//                 a[i%n] = 1;
//                 pre = i + 1;
//                 i+= 2;
//                 f = 1;
//             }
//             while(a[pre%n])pre++;
//             pre = pre%n;
//             while(a[i%n])i ++;
//             i %= n;
//         }
    
//     }

//     cout << cnt <<endl;
//     return 0;
// }
