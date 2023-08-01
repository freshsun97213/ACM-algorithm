#include <iostream>
#include <queue>
#define ll long long

using namespace std;

int main() {
  ll n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> a;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    a.emplace(x);
  }
  ll sum = 0;
  for (int i = 1; i < n; i++) {
    ll c, b;
    c = a.top();
    a.pop();
    b = a.top();
    sum += c + b;
    a.pop();
    a.emplace(c + b);
  }
  cout << sum << endl;

  return 0;
}
