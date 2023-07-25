
  
#include<iostream>

using namespace std;

int main(){
  int n,a,b;
while(~scanf("%d %d",&a,&b)){
    if(a+b == 0){break;}//在这种情况下，也就是在～scanf加while的情况下 while后无东西break等效于return
    cout << a+b<<endl;
  }

  return 0;
}
