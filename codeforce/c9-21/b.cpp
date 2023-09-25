#include<iostream>
#include<climits>
#define i64 long long
using namespace std;



int main(){
    int t;
    cin  >> t;
    while(t --){
        i64 sum = 1,n,f = 0;
        int mi = INT_MAX;
        cin >> n;
        while(n -- ){
            int a;
            cin >> a;
            mi = min(mi,a);
            if(a > 0){sum *= a;}
            else{f ++;}
        }
        if(f == 0)sum = sum/mi;
        sum = sum * (mi+1);
        cout << ((f >= 2) ? 0 : sum);
        cout << endl;
    }




    return 0;
}