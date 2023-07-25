#include<iostream>

using namespace std;

const int N =1e6 + 10;
double a[N],per[N];

int main(){
  int t,n,b;
  int round =1;
  //t 是 数据量  n是parallel可以进行的个数，
  //b是数据量  也就是bandwidth  带宽
  
  while(~scanf("%d %d %d",&t,&n,&b)){
    if(!n && !t && !b){break;}
    double sum=0.0;
    int ss = 0;
    while(ss < t){
      cin >> a[ss] >> per[ss];
      sum += a[ss] *(100 - per[ss]) / 100.00;
      //cout.precision(3);
      ss++;
  
    }
  
    double time = sum / b;
    printf("Case %d: %.2lf\n\n",round,time);


    /*
    cout << "Case " << round << ": ";
    cout.precision(2);

    cout << time <<endl<<endl;
      */
      round++;

  }
return 0;

}
