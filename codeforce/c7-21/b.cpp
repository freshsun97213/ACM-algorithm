#include<iostream>
#include<algorithm>
#define PII pair<int,int> 


using namespace std;

PII p1;

int main (){
  int t;
  cin >> t;
  while(t --){
    int n;
    cin >> n;
    int a,b,id=1,max= -1,idi=0;
    while(id <= n ){
      cin >> a >> b;
      p1 = make_pair(a,b);
      if(p1.first <= 10 && p1.second > max){
        idi = id;
        max = p1.second;
      }
      id ++;
    }
    cout << idi << endl;

  }



  return 0;
}
