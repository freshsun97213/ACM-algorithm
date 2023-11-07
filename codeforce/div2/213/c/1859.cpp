#include<iostream>
#include<string>
#include<map>
#include<utility>
#include<vector>
#include<cmath>


#define i64 long long

using namespace std;






int main(){
    int n;
    cin >> n;
    i64 sum  = 0;
    vector<string> s(n);
    map<pair<int,int>,int>cou;
    for(int i =0 ;i < n ;i ++){
        cin >> s[i];
        int sm = 0,x= s[i].size();
        for(int j = 0;j < x;j ++){
            sm += s[i][j] - '0';
        }
        sum +=  cou[{x,sm}];
        cou[{x,sm}] += 1;
    }
    sum = sum * 2 +n;

    for(auto si : s){
        int size = si.size();
        for(int i = 1;i * 2< size;i ++){
            int dif= 0,mi = 0,len = size - 2*i; 
            for(int j = 0;j < size;j ++){
                if(j < i){
                    dif += (si[j] - '0');
                }else if(j >= size-i){
                    dif -= (si[j]-'0');
                }else{
                    mi += si[j] - '0';
                }
            }
            sum += cou[{len,mi-dif}];
            sum += cou[{len,mi+dif}];
        }
    }

    cout << sum << endl;







    return 0;
}