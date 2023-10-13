#include<iostream>
#include<cmath>
// #include<climits>
#include<limits>
#define dd double 
using namespace std;
const int N =1e5+10;
dd a;


int main(){
    int n;
    cin >> n;
    dd sum = 0.0;
    dd mx = numeric_limits<double>::min();
    dd mi = numeric_limits<double>::max();
    for(int i =0 ;i < n ;i ++){
        cin >> a;
        mx = fmax(mx,a);
        mi = fmin(mi,a);
        sum += a;
    }
    sum-=(mx +mi);
    printf("%.02lf\n",sum/(n-2));

    return 0;
}