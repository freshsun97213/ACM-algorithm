#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

// inline void read(int& a){
//   int s = 0,w = 1;
//   char ch = getchar();
//   while()
//
// }
//
int main() {
  int n;
  ios::sync_with_stdio(false);
  cin.tie(0);
  string ss;
  cin >> n >> ss;
  set<string> st;
  sort(ss.begin(), ss.end());
  do {
    st.insert(ss);
  } while (next_permutation(ss.begin(), ss.end()));

  for (auto x : st) {
    // if (x.second) {
    printf("%s\n", x.c_str());
    //}
  }
  cout << st.size();

  return 0;
}

/// TLE           不懂
// #include <algorithm>
// #include <iostream>
// #include <map>
// #include <string>
// #include <vector>
// #define de(x) cerr << #x << " " << x < endl;
// using namespace std;
// map<string, int> pp;
// int tag[110010], n;
// string ss; // s("");
// char s[10000];
// void dfs(int t) {
//
//   if (!t) {
//     pp[s]++;
//     // de(s);
//     return;
//     // string s("");
//   }
//
//   for (int i = 0; i < ss.size(); i++) {
//     if (tag[i] == 0) {
//       tag[i] = 1;
//       s[ss.size() - t] = ss[i];
//       dfs(t - 1);
//       // s[s.size() - 1] = '\0';
//       tag[i] = 0;
//     }
//   }
// }
//
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   cin >> n >> ss;
//   dfs(n);
//
//   for (auto x : pp) {
//     cout << x.first << endl;
//   }
//
//   cout << pp.size() << endl;
//
//   return 0;
// }
