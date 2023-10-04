#include<iostream>

using namespace std;
const int N =2e5+10;

int day[N],answer[N];

int main(){
    // int s= 10;
    // while(s --){
    int n,m;
    cin >> n>> m;
    for(int i =0 ;i < m;i++){cin >> day[i]; }
    int j = 1;
    
    if(day[m-1] != n){day[m++] = n;}

    

    for(int i =0 ;i < m;i ++){
        for(;j <=n;j++ ){
            if(j <= day[i]){answer[j] = day[i] - j;}
            else{break;}
        }
    }

    for(int i =1 ;i <= n;i ++ ){
        cout << answer[i] <<endl;
    }

    return 0;
}