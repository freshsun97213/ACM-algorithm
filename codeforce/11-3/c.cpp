#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

#define fi first
#define se second
#define de(x) cerr << #x << " " << x << endl;
#define i64 long long

using namespace std;

// const int N = 2e5 + 10;

map<string, i64> mp11, mp12, mp21, mp22;

// struct point {
//   string s;
//   int size;
// } p1[N], p2[N]; // 0 even 1 odd;

int ssum(string s1, string s2) {
  string x = s1 + s2;
  string y = s2 + s1;
  int xs = x.size();
  int front1 = 0, back1 = 0, front2 = 0, back2 = 0;
  for (int i = 0; i < xs / 2; i++) {
    front1 += x[i] - '0';
    front2 += y[i] - '0';
    back1 += x[i + xs / 2] - '0';
    back2 += y[i + xs / 2] - '0';
  }

  if (back1 != front1 && front2 != back2) {
    return 0;
  } else if (back1 == front1 && front2 == back2) {
    return 2;
  } else {
    return 1;
  }
}
int ksum(string s1) {
  int k = 0, s = s1.size();
  for (int i = 0; i < s; i++) {
    k += s1[i] - '0';
  }
  return k;
}
int main() {
  int n;
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  string s;
  // int odd = 0, even = 0;
  for (int i = 0; i < n; i++) {
    cin >> s;
    int a = s.size();
    if (a % 2 == 1) {
      if (ksum(s) % 2 == 1) {
        mp11[s]++;
      } else {
        mp12[s]++;
      }

    } else {
      if (ksum(s) % 2 == 1) {
        mp21[s]++;
      } else {
        mp22[s]++;
      }
    }
  }
  i64 sum = 0;

  map<string, i64>::iterator x1, x2;
  for (x1 = mp11.begin(); x1 != mp11.end(); x1++) {
    sum += x1->se * x1->se;
    x1++;
    x2 = x1;
    x1--;
    for (; x2 != mp11.end(); x2++) {
      sum += x1->se * ssum(x1->fi, x2->fi) * x2->se;
    }
  }

  // map<string,i64>::iterator x1,x2;
  for (x1 = mp12.begin(); x1 != mp12.end(); x1++) {
    sum += x1->se * x1->se;
    x1++;
    x2 = x1;
    x1--;
    for (; x2 != mp12.end(); x2++) {
      sum += x1->se * ssum(x1->fi, x2->fi) * x2->se;
    }
  }

  for (x1 = mp22.begin(); x1 != mp22.end(); x1++) {
    sum += x1->se * x1->se;
    x1++;
    x2 = x1;
    x1--;
    for (; x2 != mp22.end(); x2++) {
      sum += x1->se * ssum(x1->fi, x2->fi) * x2->se;
    }
  }
  for (x1 = mp21.begin(); x1 != mp21.end(); x1++) {
    sum += x1->se * x1->se;
    x1++;
    x2 = x1;
    x1--;
    for (; x2 != mp21.end(); x2++) {
      sum += x1->se * ssum(x1->fi, x2->fi) * x2->se;
    }
  }
  // for (i64 i = 0; i < even; i++) {
  //   for (i64 j = i + 1; j < even; j++) {
  //     sum += ssum(p2[i].s, p2[j].s);
  //   }
  // }
  // sum += n;
  cout << sum << endl;

  return 0;
}
