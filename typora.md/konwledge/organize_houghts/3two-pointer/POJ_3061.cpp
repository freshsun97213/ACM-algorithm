#include<iostream>
#include<climits>
#define i64 long long

using namespace std;
const int N = 1e5+10;
i64 a[N];


int main(){
    int t;
    cin >> t;
    while(t --){
        i64 n,s;
        cin >> n >> s;
        for(int i =0 ;i < n ;i ++){cin >> a[i];}
        int mi = INT_MAX,i = 0,j=0;
        i64 sum = 0;
        while(i < n){
            while(i < n && (sum < s || j >= i) ){
                sum += a[i];
                i ++;
                while(j < i && sum >= s){
                    mi = min(mi,i-j);
                    sum-=a[j];
                    j ++;
                }
            }
        }
        cout << ((mi == INT_MAX) ? 0 : mi)<<endl;
    
    
    }
    return 0;
}
