#include<iostream>
#include<climits>

#define i64 long long

using namespace std;
const int N =1e5+10;
i64 a[N];


int main(){

    i64 n,k;
    while(~scanf("%lld %lld",&n,&k)){
        i64 t;
        if(n == 0 && k == 0){return 0;}
        for(int i =0 ;i < n ;i ++){cin >> a[i];}
        
        
        while(k --){
            i64 mi = LLONG_MAX;    
            cin >> t;

            int i = 0,j = 0;
            i64 sum = 0;
            // while(i < n){
            //     while(j >= i )//i++的条件



            // }


        
        }

    }




    return 0;
}