#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, s1;
  int f = 1, n, cnt = 0;
  cin >> n >> s;
  // cout <<s[4];
  // while(f){
  f = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      i++;
      f = 1;
      cnt += 2;
    } else {
      s1 += s[i];
    }
  }
  int len = s.size();
  // cout << len<<endl;
  s1 = s1 + s[len - 1];

  // cout <<s1 <<endl;
  // cout << s1.back()<<" "<<s1.front()<<endl;
  while (s1.size() > 1 && (s1.back() == s1.front())) {
    // cout << s1.size() << endl;
    s1.erase(s1.size() - 1, 1);
    // cout << 44 << s1.size() << endl;
    s1.erase(0, 1);
    // cout << 33 << s1.size() << endl;
    // cout << s1 <<endl;
    //     cout << cnt<<" " << s1.size() <<endl;
    cnt += 2;
    //    f = 1;
  }
  // s=s1;
  // s1="";
  //}
  cout << cnt;
  return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;
// const int N =1e5+10;
// int a[N];

// int main(){
//     int n;
//     string s;
//     cin >> n >> s;
//     int f = 1,i = 1,pre = 0,cnt = 0;

//     while(f){
//         f = 0;
//         while(i <= n){
//             if(s[pre] != s[i%n]){
//                 pre = i++;
//             }else{
//                 cnt += 2;
//                 a[pre] = 1;
//                 a[i%n] = 1;
//                 pre = i + 1;
//                 i+= 2;
//                 f = 1;
//             }
//             while(a[pre%n])pre++;
//             pre = pre%n;
//             while(a[i%n])i ++;
//             i %= n;
//         }

//     }

//     cout << cnt <<endl;
//     return 0;
// }
