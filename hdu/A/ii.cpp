#include<iostream>
#include<array>


using namespace std;

const int N = 1e6+10;
pair<double,double>pair1[N];

double a[N],barrel[N];

int main(){
  int t,n,bandwidth,round=0;
  

  while(~scanf("%d %d %d ",&t,&n,&bandwidth)){
    int ss=0;
    while(ss < t){
      cin >> pair1[ss].first >> pair1[ss].second;
      ss ++;
    }
    double bw = bandwidth / n;
    //sort
    ss = 0;
    while (ss < t){ 
      a[ss] = pair1[ss].first * pair1[ss].second / 100;
      ss ++;
    }
    //merge the memoery and the time
    //calculate
    ss = n;
    for(int i =0;i < n;i ++){
      barrel[i] = a[i];
    }


    int i = 0;
    while( ss < t){
      if(barrel[0] <= barrel[1] && barrel[0] <= barrel[2]){ 
        barrel[0] += a[ss];
        if(ss==t-1){i = 0;}
      }
      else if(barrel[1] <= barrel[0] && barrel[1] <= barrel[2]){barrel[1] += a[ss];
       if(ss==t-1){i = 1;}
      }
      else if(barrel[2] <= barrel[1] && barrel[2] <= barrel[0]){
        barrel[2] += a[ss];i = ss;
       if(ss==t-1){i = 2;}
      }
      ss ++;
    }
    

    double time = barrel[i] / bw;
    cout.precision(4); 
    cout << "Case " << round << ": "; 
    //time = time /3600.00;
    cout.precision(4);
    printf("%.4lf",time);
    cout<< endl << endl;


    round ++;
  }
 
  return 0;
}
