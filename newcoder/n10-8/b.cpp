#include<iostream>
#include<map>
using namespace std;

map<int,int>mpx,mpy;

int main(){
    int t;
    cin >> t;
    while(t --){
        mpx.clear();
        mpy.clear();
        int x, y;
        cin >> x >> y;
        while(x >= 6 && x % 6 == 0){mpx[6] ++;x /= 6;}

        while(x >= 5 && x % 5 == 0){mpx[5] ++;x /= 5;}
        mpx[x] ++;
        while(y >= 6 && y % 6 == 0){mpy[6] ++;y /= 6;}

        while(y >= 5 && y % 5 == 0){mpy[5] ++;y /= 5;}
        mpy[y] ++;
        if(x != y || mpy[6] > mpx[6] || mpx[5] >mpy[5]){cout << -1 <<endl;}
        else{
            cout << mpx[6] -  mpy[6] + mpy[5] -mpx[5] <<endl;
        }

    }




    return 0;
}