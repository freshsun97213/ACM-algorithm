#include <iostream>
#include <string>
#include <map>
#include<algorithm>
#include<vector>

using namespace std;
vector<int>a;
// const int N = 30;
//int ans[N];
map<string, int> mp;

void init()
{
    mp["one"] = 1;
    mp["a"] = 1;
    mp["both"] = 2;
    mp["another"] = 1;
    mp["first"] = 1;
    mp["second"] = 2;
    mp["third"] = 3;
    mp["two"] = 2;
    mp["three"] = 3;
    mp["four"] = 4,
    mp["five"] = 5, mp["six"] = 6, mp["seven"] = 7, mp["eight"] = 8, mp["nine"] = 9;
    mp["ten"] = 10;
    mp["eleven"] = 11;
    mp["twelve"] = 12;
    mp["thirteen"] = 13;
    mp["fourteen"] = 14;
    mp["fifteen"] = 15;
    mp["sixteen"] = 16;
    mp["seventeen"] = 17;
    mp["eighteen"] = 18;
    mp["nineteen"] = 19;
    mp["twenty"] = 20;
}

int main()
{
    init();
    int cnt = 0;
    for (int i = 0; i < 6; i++){
        string s;
        cin >> s;
        if(mp[s] > 0){
            a.push_back((mp[s]*mp[s])%100);
            //a[cnt ++] = mp[s];
        }
        // char c = getchar();
        // cout << s << endl;
    }
    if(!a.size()){cout <<0 <<endl;return 0;}
    sort(a.begin(),a.end());
    cout << a[0];
    for(int i = 1;i < a.size();i ++){
        printf("%.2d",a[i]);
    }
    return 0;
}