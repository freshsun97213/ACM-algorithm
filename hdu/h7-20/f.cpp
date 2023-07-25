#include<iostream>
#include<queue>
#include<stack>
#include<map>
#define int long long
#define debug(x) cerr << #x << " "<< x <<endl;

long long nex[1600];
using namespace std;



int min(int x,int y,int z){
  if(x <= y && x <= z){return x;}
  else if(y <= x && y <= z){return y;}
  else{return z;}
}

int uglynum(int n){
  int i2 = 1,i3 = 1,i5 = 1;
  int nextnum = 2;
  int next2 = 2,next3=3,next5 = 5;
  for(int i = 2;i <= n;i ++){
    nextnum = min(next2,next3,next5);
    nex[i] = nextnum;
    if(nextnum == next2){
      i2 ++;
      next2 = nex[i2] * 2;
      //i2 ++;
    }
    if(nextnum == next3){

      i3 ++;
      next3 = nex[i3] * 3;
      //debug(i3);
      //debug(next3);
      //i3 ++;
    }
    if(nextnum == next5) {

      i5 ++;
      next5 = nex[i5] * 5;
      //i5 ++;
    }

  }
  return nex[n];


}




signed main(){
  
  nex[1] = 1;
  int n=1500;
  //cin >> n;
  int num = uglynum(n);
    

  //priority_queue<int>s;
  map<int,int>s;//不能用队列如果是下面 的算法，因为
  //如果要用队列的话会导致，i×5 在 i × 2之间 那个i × 2 还没到i×4的
  //位子，也就是说里面并非是填满的，他导致cnt == 1500 的时候
  //他不是正确的值
  

  //其实只要解决了迭代器里面的下标可解就可以
  //其次还要解决i×2 的空白区域

  // s[1] = 1;
  // s[-1] = 1; 
  // for(auto &x : s){
  //   cout << x.first << x.second << endl;
  // 
  // }
  // //  
  // int cnt = 1;
  //
  // s[1] = 1;
  //
  // for(int i = 2;cnt <= 2400;i ++){
  //   if(is(i)){
  //     s[i*2] = 1;
  //     cnt ++;
  //     //if(cnt == 1500){break;}
  //     if(cnt < 400){
  //       s[i * 3] = 1;
  //       cnt ++;
  //     }
  //     //if(cnt == 1500){break;}
  //     if(cnt < 200){
  //     s[i*5]= 1;
  //     cnt ++;
  //     }
  //   } 
  // }
  //   
  // //int num = s.find(1500);
  // int num;
  // map<int ,int>::iterator i;
  // for(;cnt == 1500;i ++){
  //   ++ cnt;
  //   i->second = cnt;
  //   debug(i->second);
  //   if(cnt == 1500){num = i->first;}
  // }
  //   
  //   
  //   
  //   
  cout << "The 1500'th ugly number is " << num << "." << endl;
  return 0;
}



//
// bool is(int n){
//   //double m = double(n);
//   while(n % 2 == 0){
//     n = n / 2;
//   }
//   //m = double(n);
//   while(n % 3 == 0){
//     n = n / 3;
//   }
//   //m = double(n);
//   while(n % 5 == 0){
//     n = n / 5;
//   }
//   if(n != 1){return false;}
//   else{return true;}
//
// }
