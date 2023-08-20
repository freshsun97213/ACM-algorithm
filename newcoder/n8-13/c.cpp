#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
long long L,R,mmin,mmax;
long double t;
int check(long long m) {
    if ( t/(long double)m < (long double)L ) return 0;
    else if ( t/(long double)m > (long double)R ) return -1;
    return 1;
}
int main() {
    long long T;
    cin >> T;
    long long a,b,l,r;
    while ( T-- ) {
        cin >> a >> b >> L >> R;
        t = b-a;
        mmin = -1;
        long long l = floor((t/R)),r = ceil(t/L);
        while ( r > l ) {
            long long m = l+(r-l)/2;
            int f;
            f = check(m);
            if ( f == 1 ) {
                if ( mmin == -1 ) {
                    mmin = m;
                } else {
                    if ( m < mmin ) {
                        mmin = m;
                    }
                }
                r = m;
            } else if ( f == 0 ) {
                r = m;
            } else if ( f == -1 ) {
                l = m+1;
            }
        }
        if ( check(l) ) {
            if ( mmin == -1 ) {
                mmin = l;
            } else if ( l < mmin ) {
                mmin = l;
            }
        }
        if ( mmin == -1 ) {
            cout << -1 << endl;
            continue;
        }
        l = floor((t/R)),r = ceil(t/L);
        mmax = -1;
        while ( r > l ) {
            long long m = l+(r-l)/2;
            int f;
            f = check(m);
            if ( f == 1 ) {
                if ( mmax == -1 ) {
                    mmax = m;
                } else {
                    if ( m > mmax ) {
                        mmax = m;
                    }
                }
                l = m+1;
            } else if ( f == 0 ) {
                r = m;
            } else if ( f == -1 ) {
                l = m+1;
            }
        }
        if ( check(l) ) {
            if ( mmax == -1 ) {
                mmax = l;
            } if ( l > mmax ) {
                mmax = l;
            }
        }
        cout << mmin << ' ' << mmax << endl;
    }
}



// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #define ld long double
// #define ll long long
// using namespace std;
// ll L,R,mmin,mmax;
// ld t;

// int main(){
// ll t;
// cin >> t;
// ll a,b,l,r;
// while(t --){
//   cin >> a >> b >> l >> r;
//   a = b - a;
//   while(l < r){
//     if(check(l,r)){

//     }

//   }



// }



//   return 0;
// }








// #include <cmath>
// #include <cstdio>
// #include <iostream>
// #define de(x) cerr << #x << " " << x << endl;
// using namespace std;
// int a, b, l, r;
// int main()
//   cin >> t;
//   while (t--) {
//     cin >> a >> b >> l >> r;
//
//     int x = b - a, ansmx;
//     int ansmi = ceil((x * 1.0) / r);
//     ansmx = x / l;
//     if (l * ansmi > x) {
//       puts("-1");
//       continue;
//     }
//     cout << ansmi << " " << ansmx << endl;
//   }
//   return 0;
// }

// #include <cmath>
// #include <iostream>
// #define de(x) cerr << #x << " " << x << endl;
// using namespace std;
// int a, b, l, r;
// int check() {
//   int x = b - a;
//   int i = ceil(x * 1.0 / r);
//   // for (; l * i <= x; i++) {
//   if (l * i > x) {
//     return 0;
//   }
//   //}
//   return 1;
// }
// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     cin >> a >> b >> l >> r;
//     if (a == b) {
//       cout << "0 0" << endl;
//     } else if (b < a || !check()) {
//       cout << "-1" << endl;
//     } else {
//       int x = b - a, ansmx;
//       int ansmi = (x + r - 1) / r;
//       int ss = x % l;
//       if (ss != 0)
//         ansmx = ceil(x * 1.0 / l) - ceil(ss * 1.0 / l);
//       else {
//         ansmx = x / l;
//       }
//       cout << ansmi << " " << ansmx << endl;
//     }
//   }

//   return 0;
// }
