#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long

using namespace std;
const int N =1E6+10;
ll a[N];
int main(){
    int n;
    cin >> n;
    for(int i =1 ;i <= n ;i ++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    int x,y;
    cin >> x >> y;
    if(x <= y){
        cout << min(a[y-1] - a[x-1] ,a[x -1] -a[0] + a[n]-a[y - 1])<<endl;
    }else{
        
        cout << min(a[x-1] -a[y-1] ,a[y-1] -a[0] + a[n]-a[x-1])<<endl;
    }

    return 0;
}