#include<iostream>
#include<algorithm>

using namespace std;
int a[3];
    



int main(){
    for(int i = 0 ;i < 3;i ++){
        cin >> a[i];
    }
    sort(a,a+3);
    int x = __gcd(a[0],a[2]);

    cout << a[0]/x <<"/" << a[2]/x <<endl; 



    return 0;
}