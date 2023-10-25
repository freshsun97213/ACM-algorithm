#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;
  string s;
  cin >> s;
  int index = 0;
  string sea = "VK", s1 = "VV", s2 = "KK";
  int change = 0, cnt = 0;
  while (s.find(sea, index) != string ::npos) {
    cnt++;

    s.erase(index, 2);
    cout << s << endl;
    s.insert(index, "X");
    cout << s << endl;
    index = s.find(sea, index);
  }

  if (s.find(s1, index) != string ::npos ||
      s.find(s2, index) != string ::npos) {
    change = 1;
  }

  cout << cnt + change << endl;

  return 0;
}
