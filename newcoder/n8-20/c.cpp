#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a= 1;
    while(a < n){cout << a++ <<" "<< n-- << " ";}
    if(a == n){cout << n;}
    return 0;
}