#include<iostream>
#include<algorithm>

#define mod 1e9 + 7

using namespace std;

const int N =1e9 + 10;
int a[N];


int main(){

  int n,k;
  cin >> n >> k;
  for(int i =0 ;i < n;i ++){cin >> a[i];}
  sort(a,a + n);
  int op = 0, key;
  for(int i = 0;i < k;i ++){
    cin >> op >> key;
    
  }



  return 0;
}
