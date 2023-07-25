
#include<climits>
#include<iostream>
#include<string>
#include<cmath>
#define ll long long
#define INF 0x3f3f3f3f3f

using namespace std;

string str;

int mmin(int a,int b){
  if(a <= b){return a;}
  else {return b;}

}

int main(){
  cin >> str;
  ll len=str.size();
  ll sum = 0,min = INT_MAX;
  
  for(int i = 'a';i <= 'z'; i ++ ){
    sum = 0;    
    for(int j = 0;j < len; j ++){
      sum += mmin( abs(i-str[j]),26-abs((i-str[j])));  
    }
    if(sum < min ){min = sum;}
 }
  cout << min;

  return 0;
}
  
//  for(int i = 0;i < len;i ++){
//  sum += min(str[i] - 96)
    

