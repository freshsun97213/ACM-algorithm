#include"testlib.h"
#include<iostream>
// #define MAX 2e5
using namespace std;


int main(int argc, char* argv[]){
    registerGen(argc, argv,1);
    int a = atoi(argv[1]);
    int n = rnd.next(1,200000);
    int m = rnd.next(1,n);
    int pre = 0;
    cout << n<<" " <<m <<endl;
    for(int i = 0;i < m - 1;i ++){
        pre = rnd.next(pre,(n-1) - (m-i)-1) + 1;
        cout << pre - 1 <<" ";
        
    }
    cout << n <<endl;


    return 0;    
}