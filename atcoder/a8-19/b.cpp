#include<iostream>

using namespace std;
const int N = 1e3+10;
int day[N];

int main(){
    int m,sum = 0;
    cin >> m;
    for(int i = 1;i <= m;i ++){
        cin >> day[i];
        sum += day[i];
        day[i] += day[i - 1];
    }
    int d = (sum+1) / 2,cnt = 0;
    for(int i = 1;i <= m;i ++){
        if(day[i-1] <= d && day[i] >= d ){
            cnt = i-1;
            break;
        }
    }
    //cout << d << endl;
    cout << cnt + 1 <<" "<< d - day[cnt] << endl;


    return 0;
}