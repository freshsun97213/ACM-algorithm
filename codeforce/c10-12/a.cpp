
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include  <map>
using namespace std;

void solve() {
    int n , m;
    cin >> n >> m;
    string x , s;
    cin >> x >> s;

    for(auto i : s) {
        if(x.find(i) == string::npos) {
            cout << "-1\n";
            return;
        }
    }

    if(n >= m && x.find(s) != string::npos) {
        cout << "0\n";
        return;
    }

    if(n >= m) {
        x += x;
        if(x.find(s) != string::npos) {
            cout << 1 << "\n";
            return;
        } else {
            cout << "-1\n";
            return;
        }
    }

    int cnt = 0;
    while(x.size() <= s.size() + m) {
        if(x.size() >= s.size()) {
            if(x.find(s) != string::npos) {
                cout << cnt << "\n";
                return;
            }
        }
        x += x;
        cnt++;
    }

    if(x.find(s) != string::npos) {
        cout << cnt << "\n";
    } else {
        cout << -1 << "\n";
    }


}

int main() {

    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}