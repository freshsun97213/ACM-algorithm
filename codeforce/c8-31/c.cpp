#include<iostream>
using namespace std;

void solve(){
    string s; cin >> s;

    int n = s.length();

    int total = 0, s_min = 0, s_max = 0;

    for(int i=0; i<n; i++) {

        if(s[i] == '+') {
            if(s_max == total) s_max++;
            total++;

            s_min = max(s_min, 1);
        }
        else if(s[i] == '-') {
            if(s_max == total) s_max--;
            if(s_min == total) s_min--;
            total--;
        }
        else if(s[i] == '0') {
            if(s_min == total) {
                cout << "NO";
                return;
            }
            if(s_max == total) s_max--;
        }
        else {
            if(s_max != total) {
                cout << "NO";
                return;
            }

            s_max = total;
            s_min = total;
        }
    }

    cout << "YES";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
        if(t) cout << '\n';
    }

    return 0;
}