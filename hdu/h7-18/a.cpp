#include<bits/stdc++.h>
#define debug(x) cerr << x << ": " << #x << endl;

using namespace std;


struct stu{
  double a[100];

};
//
//bool cmp(double x,double y){

//}

int main(){
  int n,m,s,maxi,mini;
  stu st[110];
  double sum=0,averagemax=0;
  cin >> n >> m;
  s = m;
  while(n -- ){
    sum =0 ;
    s = 0;
    mini = 0;
    maxi = 0;
    cin >> st[n].a[s];
    s ++;
    while(s < m){
      cin >> st[n].a[s];
      if(st[n].a[s] > st[n].a[maxi]){maxi = s;}
      
      if(st[n].a[s] < st[n].a[mini]){mini = s;}
      //debug(st[n].a[m]);
      s ++;
    }
    //debug(mini);
    
    for(int i = 0;i < m;i ++){
      //debug(i);
      if(i != maxi && i != mini)sum += st[n].a[i];
      //debug (sum);
    }
    if(sum > averagemax){averagemax = sum;}

  }
  averagemax = averagemax/(m-2);
  //auto old_precision = cout.precision(2);
  //cout.precision(old_precision);
  //cout << setprecision(2) <<averagemax <<endl;
  printf("%.2lf",averagemax);



  return 0;
}
