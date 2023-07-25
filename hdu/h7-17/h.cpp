#include<iostream>
const int N = 10010;
int a[1500];
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int cnt = 0;
  for(int i = n;i <= m;i ++){
    if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
      a[cnt] = i;
      cnt ++;
    }
  }
  cout << cnt << endl ;
  for(int i = 0;i < cnt ;i ++ ){

    cout << a[i] << " ";
  }
  cout<<endl;
  return 0;
}




// #include<iostream>
// const int N = 10010;
// int a[1500];
// using namespace std;
// int main(){
//   int n,m;
//   cin >> n >> m;
//   int cnt = 0;
//   for(int i = n;i <= m;i ++){
//     if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
//       a[cnt] = i;
//       cnt ++;
//     }
//   }
//   cout << cnt << endl ;
//   for(int i = 0;i < cnt-1 ;i ++ ){
//     cout << a[i] << " ";
//   }
//   cout <<a[cnt -1] <<endl;
//   return 0;
// }
//
//
//

