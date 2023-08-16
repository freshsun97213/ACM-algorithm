#include <iostream>
#include <vector>
using namespace std;
struct Node {
  int x, y, l;
};
vector<Node> ans;
int n, m, n1, m1;
void f(int x, int y, int flag) {
  if (x == n - n1 && y == m - n1) {
    ans.push_back({x, y, min(n1, m1)});
    return;
  }
  int l = min(n1, m1);
  int stX = x, stY = y, k = 0;
  while (stX >= 0 && stX + n1 < n && stY >= 0 && stY + n1 < m) {
    ans.push_back({stX, stY, n1});
    if (flag) {
      stX += l;
    } else {
      stY += l;
    }
    k++;
  }
  n1 = n1 % m1;
  swap(n1, m1);
  if (flag) {
    f(x + k * l, y, 0);
  } else {
    f(x, y + k * l, 1);
  }
}

void solve() {
  ans.clear();
  cin >> n >> m;
  n1 = n, m1 = m;
  f(0, 0, (m < n));
  if (ans.size()) {
    cout << "YES\n" << ans.size() << "\n";
    for (auto &x : ans) {
      cout << x.x << " " << x.y << " " << x.l << "\n";
    }
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}

// #include<iostream>
// using namespace std;
// const int N =1e4+10;
// struct point{
//   int x,y,l;
// }p[N];
//
//
// int main(){
//   int t;
//   cin >> t;
//   while(t --){
//     cout << "YES" <<endl;
//     int n,m;
//     cin >> n >> m;
//     int mi = min(m,n);
//     int ans = 0;
//     if(m == n){
//       cout << "1"<<endl;
//       cout << "0 0 "<<n<<endl;
//     }
//     else if(m > n){
//       while(m % n != 0){
//         ans ++;
//         if(ans == 0){p[ans].x = 0,p[ans].y=0;}
//         else{p[ans].x = p[ans -1].y +p[ans - 1].l,p[ans].y = p[ans
//         -1].y+p[ans].l;} p[ans].l = n; m = m - n; swap(m,n);
//       }
//       int k = m / n;
//       ans += m / n;
//       cout << ans << endl;
//       for(int i = 0;i < ans;i ++){
//         if(i > ans - k){
//           cout << 1 <<endl;
//         }else {
//
//         }
//       }
//     }else if(n > m){
//
//       while(m % n != 0){
//         ans ++;
//         m = m - n;
//         swap(m,n);
//       }
//       ans += m / n;
//       cout << ans <<endl;
//     }
//   }
//   return 0;
// }
