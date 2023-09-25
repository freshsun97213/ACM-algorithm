#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
#include<map>
#define i64 long long
const int N =1e3+10;

using namespace std;

int num[4];//0 是大写，1是小写，2是数字，3是符号

int main(){
    int t;
    cin >>t;
    while(t --){
        string s;
        cin >> s;
        for(int i =0 ;i < 4;i ++){num[i] = 0;}
        for(int i =0 ;i < s.size();i ++){
            if(s[i] <= 'Z' && s[i] >= 'A'){num[0] ++;}
            else if(s[i] <= 'z' && s[i] >= 'a'){num[1] ++;}
            else if(s[i] <= '9' && s[i] >= '0' ){num[2] ++;}
            else{num[3] ++;}
        }
        int sum = 0;
        for(int i = 0;i < 4;i ++){
            if(num[i] > 1){sum += 65*num[i];}
            else if(num[i] == 1){
                if(i < 2)sum += 25;
                else{
                    (i == 2) ? sum += 9:sum += 3;
                }
            }
        }

        cout << sum << endl;
    }






    return 0;
}