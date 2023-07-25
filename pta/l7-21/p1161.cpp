#include<iostream>
#include<math.h>
#define debug(x) cerr << #x << " " << x << endl;

const int MAX = 2e7 + 10;

const int N = 5010;

using namespace std;
//double a[N],t[N]

int f[MAX];

int main(){
  double a,t,k;
  int n,sum=0;
  cin >> n;
  //n = n
  //n += 1;
  while(n --){
    cin >> a >> t;
    for(int i = 1; i <= t;i ++){
      f[(int)(a * 1.0 * i)] = 1 - f[(int )(a * 1.0 * i)];
      //debug((int)(a * i *1.0));
    }
    sum += t;
  }
  for(int i = 1;i <= sum ;i ++){ 
    if( f[i] ){cout << i <<endl;break;}
  }

  return 0;
}


