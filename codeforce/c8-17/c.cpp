#include<iostream>
#include<stack>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t --){
        int n;
        cin >> n;
        int s,min ,cnt = 0;
        cin >> min;
        for(int i = 1 ;i < n;i ++){
            cin >> s;
            if(s < min){
                min = s;
                cnt ++;
            }else {
            }
        }
        cout << cnt<<endl;;
    
    
    }



    return 0;
}