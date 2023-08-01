#include <iostream>
#include <map>
#include <string>

#define ll long long

using namespace std;
const int N = 1e6 + 10;

ll s[N];

int main() {
  map<string, int> mp;
  mp["ACE"] = -1;
  mp["BDF"] = -1;
  mp["CEG"] = -1;
  mp["DFA"] = -1;
  mp["EGB"] = -1;
  mp["FAC"] = -1;
  mp["GBD"] = -1;

  // mp["BDF"]
  string s;
  cin >> s;
  mp[s]++;
  if (mp[s] > 0) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }

  return 0;
}
