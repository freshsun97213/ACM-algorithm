#include <iostream>
#define ll long long

using namespace std;

const int N = 1e5 + 10;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a;
    string b;
    cin >> a >> b;
    ll sum = 0;
    for (int i = 0; i < b.size(); i++) {
      sum += b[i] - '0';
    }
    cout << sum * a << endl;
  }

  return 0;
}
