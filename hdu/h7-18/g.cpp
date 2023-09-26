#include <algorithm>
#include <climits>
#include <iostream>

#define i64 long long

using namespace std;

const int N = 1e5 + 10;

struct score {
  i64 id, sum;
  friend bool operator<(const score &a, const score &b) {
    return a.sum > b.sum;
  }
} num[N];

void mswap(score *a, score *b) {
  swap(a->id, b->id);
  swap(a->sum, b->sum);
  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  // n 歌的数量 m是需要的数量 a人数
  int mx = INT_MIN, mxid = 0;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= n; j++) {
      i64 sum = 0;
      cin >> sum;
      num[j].id = j;
      num[j].sum += sum;
      (i == b && mx < sum) ? mx = sum, mxid = j : mxid = mxid;
    }
  }
  num[0].id = mxid;
  sort(num + 1, num + 1 + n);
  int id = 0;
  for (int i = 1; i <= m; i++) {
    (num[i].id == mxid) ? id = i : id = id;
  }

  if (id) {
    cout << num[0].id;
    for (int i = 1; i <= m; i++) {
      if (i != id)
        cout << " " << num[i].id;
    }
  } else {
    cout << num[1].id;
    for (int i = 2; i < m; i++) {
      cout << " " << num[i].id;
    }
    cout << " " << num[0].id;
  }

  return 0;
}
// 这些个为什么不对？？？ 我swap就对了？？？
// } else {
//   mswap(&num[m], &num[0]);
//   cout << num[1].id;
//   for (int i = 2; i <= m; i++) {
//     cout << " " << num[i].id;
//   }
// }
