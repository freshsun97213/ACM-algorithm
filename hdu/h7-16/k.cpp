#include<iostream>
#define ll long long

using namespace std;

ll a[3],b[3];

int main(){
  int t,sec,min;
  cin >> t;
  while(t--){
    cin >> a[0] >> a[1]>>a[2]>>b[0]>>b[1]>>b[2];
  
    if(a[2]+b[2] >= 60){sec = (a[2]+b[2]) % 60;
      b[1] += (a[2]+b[2])/60;
    }
    else{sec = a[2]+b[2];}
    if(a[1]+b[1] >= 60){
      min = (a[1]+b[1]) % 60;
      b[0] += (a[1]+b[1])/60;
    }
    else{min = a[1]+b[1];}
    cout << a[0]+b[0]<<" "<<min<< " " << sec <<endl;
  }


}
