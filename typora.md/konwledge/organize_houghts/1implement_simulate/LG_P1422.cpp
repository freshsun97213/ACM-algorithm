#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    (n >= 150) ? sum += 150.0*0.4463 : sum += n *0.4462;
    if(n > 150)(n >= 400) ? sum += 250.0*0.4663 : sum += (n-150) *0.4663;
    (n > 400) ? sum += 0.5663 * (n-400) : sum += 0;  
    // cin >> sum ;
    printf("%.1lf",sum);

    return 0;
}

// 吼吼依旧 有这种问题呢

