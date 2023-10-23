#include<iostream>
#include<string>
#include<algorithm>
#define de(x) cerr << #x << " " << x <<endl;
using namespace std;

string erasefront(string s,int k){
    if(s.size() == 1 || k == 1){
        return s;
    }
    string ans;
    int f = 0,cnt =0 ;
    for(auto &x : s){
        if((!f &&  x != '0' )||cnt == (k -1)){f = 1;ans+=x;}
        else if(f)ans += x;
        cnt ++;
    }
    return ans;
}

string erasetail(string s,int k){
    // if(s.size() == 1){
    //     return s;
    // }
    
    string ans;
    int f = 0,cnt = 0;
    // cout << "starte" <<"  " << s<<endl;
    auto it = s.end() - 1;
    // 字符串的end指针指向的地方是结尾之后的空地方
    for(;it != s.begin();it --){
        cnt ++;
        if(!f &&  *it != '0'){f = 1;ans = *it;}
        else if(f)ans = *it+ans;
        // cout << *it <<  " " <<ans <<endl;
        // cout <<k << " K" <<endl;
        if(cnt == k-1 && !f){
            // cout <<k << " K" <<endl;
            ans += *it;
            f = 1;
        }
    }
    ans =*s.begin() + ans;
    return ans;
}

// 前后联系问题，改了前面的后面就忘记改变了
// 最好还得是有一个较为能够记忆下来的操作。
// 分开写函数的确是一个好方法，
// 函数应该是功能化的分离，并不应该是为了去凑出正确解答的
// 一种手段。

int main(){
    // int t;
    // cin >> t;
    // while(t --){
    string s,ans;
    cin >> s;
    // reverse(s.begin(),s.end());
    if(s.find("%") != string::npos){
        int k = s.find("%");
        
        reverse(s.begin(),s.end()-1);
        de(s);
        ans = erasefront(s,k);
    }else if(s.find(".") != string::npos){
        int k = s.find(".");
        // cout << k <<endl;
        reverse(s.begin(),s.begin()+s.find("."));
        reverse(s.begin()+s.find(".")+1,s.end());
        // cout << s <<endl;
        ans = erasefront(s,k);
        k = ans.find(".");
        // de(k);
        // de(ans)
        ans = erasetail(ans,ans.size()-k);
    }else if(s.find("/") != string :: npos){
        int k = s.find("/");
        reverse(s.begin(),s.begin()+s.find("/"));
        reverse(s.begin()+s.find("/")+1,s.end());
        string pre=string(s.begin(),s.begin()+k+1),hou=string(s.begin()+k+1,s.end());
        
        ans =erasefront(pre,k);
        ans += erasefront(hou,1000);
        // ans =erasetail(ans,k);
    }else{
        
        reverse(s.begin(),s.end());
        ans =erasefront(s,s.size());
        // ans = s;
    }
    cout << ans;
    // }
    return 0;
}