#include<iostream>
#include<vector>
using namespace std;

//int t1[]
// 1、L和R的字符要相同
// 进行的操作是： 将左边界和右边界之间的字符变成边界字符
// 判断是否两个字符串可以相互转换

int main(){
    int t = 0;
    cin >> t;
    string s1,s2;
    while(t --){
        cin >> s1 >> s2;
        int tot1 = 0,tot0 = 0;
        vector<int>t1,t2;
        //int mi1 = s1.size(),mx0=-1,mi21=s2.size(),mx20 = -1;
        for(int i = 0 ;i < s1.size()-1;i ++){
            if(s1[i] == '0' && s1[i+1] == '1'){
                t1.push_back(i);
                tot1 ++;
            }  
        }
        for(int i = 0 ;i < s2.size()-1;i ++){
          if(s2[i] == '0' && s2[i+1] == '1'){
            t2.push_back(i);
            tot0 ++;
        }  
        }
        int f = 0;
        for(int i = 0;i <t1.size();i ++){
            for(int j = 0;j < t2.size();j ++){
            if(t1[i] == t2[j]){f = 1;cout <<"YES"<<endl;break;}
            //else{cout <<"NO"<<endl;}
            }
            if(f){break;}
        }
        if(!f){cout << "NO"<<endl;}
    }





    return 0;
}