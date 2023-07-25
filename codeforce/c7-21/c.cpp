#include<iostream>
#include<string>

using namespace std;

int main(){
  int n;
  cin >> n;

  while(n -- ){
    string s = "";
    char c;
    for(int i =0 ;i < 8;i ++){
      for(int j = 0;j < 8;j ++){
        cin >> c;
        if(c <= 'z' && c>='a'){
          s += c;
        }

      }
    }

      cout << s <<endl;
  }



  return 0;
}
