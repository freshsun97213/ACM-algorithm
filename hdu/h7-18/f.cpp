#include<iostream>
#include<cmath>

using namespace std;

struct ppp{
  int x;
  int y;
}p[10100];

struct ppp pp[10100];

int c[10010][10010];
int get ( int a,int b,int a1,int b1){  
  // if(sqrt((p[maxpi].x - a)*(p[maxpi].x -a)+(p[maxi].y-b)*(p[maxpi].y-b))   //< sqrt((p[m].x - a)*(p[m].x -a)+(p[m].y-b)*(p[m].y-b)){
  //maxi = m;
  //} 
  return (a - a1) *(a-a1) + (b - b1)*(b -b1); 
}
int main(){
  int T,N,K,a,b,m = 0;
  cin >> N >> K>> T;
  while(m < N ){cin >> pp[m].x >> pp[m].y; m ++;}
  m = 0;
  while(m < K ){
    cin >> p[m].x >> p[m].y; 
    
    c[p[m].x + 1000][p[m].y + 1000] = 1;
    m++;
  }
  int pi = 0,num = 0;
  while( T -- ){
    cin >> a >> b;
    int mx = 0;
    for(int i = 0;i < N;i ++ ){
      int d = get(a,b,pp[i].x,pp[i].y);
      if(d > mx){pi = i;mx = d;}

    }
    if(c[pp[pi].x+1000][pp[pi].y+1000] == 1){
      num ++;
    }
//    if(maxpi == maxppi){ max[cnt] = }

  }
  cout << num;

  return 0;
}
