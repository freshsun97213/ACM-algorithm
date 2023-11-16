#include <iostream>
#include <vector>

#define i64 long long
#define vi vector<i64>
#define de(x) cerr << #x << " " << x << "  ";
using namespace std;

int main() {
  i64 w, s, h;
  cin >> w >> s >> h;
  i64 q, sum = w * s * h;
  cin >> q;
  vector<vector<vector<i64>>> a(w, vector<vector<i64>>(s, vector<i64>(h)));
  for (int i = 0; i < q; i++) {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    for (int x = a1 - 1; x <= b1 - 1; x++) {
      // cout << x <<" ";
      // de(x);
      for (int y = a2 - 1; y <= b2 - 1; y++) {
        // de(y);
        for (int z = a3 - 1; z <= b3 - 1; z++) {
          // de(z);
          // cout << a[x][y][z] << " ";
          if (a[x][y][z] == 0) {
            sum--;
            a[x][y][z] = 1;
          }
        }
      }
    }
  }
  cout << sum;
  return 0;
}
