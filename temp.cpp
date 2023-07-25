#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#pragma ide diagnostic ignored "hicpp-signed-bitwise"
#pragma GCC optimize ("Ofast,unroll-loops")
#pragma GCC optimize("no-stack-protector,fast-math")
#include<bits/stdc++.h>
using namespace std;
#ifndef lowbit
#define lowbit(x) (x & (-x))
#endif
#define LL long long
#define ll LL
#define pii pair<int, int>
#define pll pair<LL, LL>
#define pb push_back
#define F first
#define S second
#define all(_obj) _obj.begin(), _obj.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define per(i,a,b) for(int i=(a);i>=(b);--i)
#define endl "\n"
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define Yes cout<<"Yes"<<endl
#define _up(x) (int)ceil(1.0*x)
#define _down(x) (int)floor(1.0*x)
#define debug(a) cout << #a << " = " << a << endl;
#define debug2(a,b) cout<<#a<<" = "<<a<<' '<<#b<<" = "<<b<<endl;
#define debug3(a,b,c) cout<<#a<<" = "<<a<<' '<<#b<<" = "<<b<<' '<<#c<<" = "<<c<<endl;
#define debug4(a,b,c,d) cout<<#a<<" = "<<a<<' '<<#b<<" = "<<b<<' '<<#c<<" = "<<c<<' '<<#d<<" = "<<d<<endl;
 
#define debugx(a, idx) cout << #a << "[" << idx << "] = " << a[idx] << endl;
#define debugpii(a) cout<<#a<<" = "<<a.first<<", "<<a.second<<endl;
#define debugarr(a, x) cout<<#a<<": "; for(int i = 0; i < x; i++) cout << a[i] << ' '; cout << endl;
#define debugarr2(a, n, m) cout<<#a<<": \n";for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<a[i][j]<<' ';cout<<'\n';}
#define debugvec(a) cout<<#a<<": "; for(int i = 0; i < a.size(); i++) cout << a[i] << ' '; cout << endl;
#define sj srand((unsigned)time(NULL));
 
#define INF 0x3f3f3f3f3f3f3f3f
#define eps 0.0000000001
#define baoliu(x,y) cout<<fixed<<setprecision(y)<<x
const int N = 1e6 + 7;
// au + vm == 1;
template <typename T>
T inverse(T a, T m) {
  T u = 0, v = 1;
  while (a != 0) {
    T t = m / a;
    m -= t * a; swap(a, m);
    u -= t * v; swap(u, v);
  }
  return u;
}
 
template <typename T>
class Modular {
 public:
  using Type = typename decay<decltype(T::value)>::type;
  
  constexpr Modular() : value() {}
  template <typename U>
  Modular(const U& x) {
    value = normalize(x);
  }
  
  template <typename U>
  static Type normalize(const U& x) {
    Type v;
    if (-mod() <= x && x < mod()) v = static_cast<Type>(x);
    else v = static_cast<Type>(x % mod());
    if (v < 0) v += mod();
    return v;
  }
  
  const Type& operator()() const { return value; }
  template <typename U>
  explicit operator U() const { return static_cast<U>(value); }
  constexpr static Type mod() { return T::value; }
  
  Modular& operator+=(const Modular& other) { if ((value += other.value) >= mod()) value -= mod(); return *this; }
  Modular& operator-=(const Modular& other) { if ((value -= other.value) < 0) value += mod(); return *this; }
  template <typename U> Modular& operator+=(const U& other) { return *this += Modular(other); }
  template <typename U> Modular& operator-=(const U& other) { return *this -= Modular(other); }
  Modular& operator++() { return *this += 1; }
  Modular& operator--() { return *this -= 1; }
  Modular operator++(int) { Modular result(*this); *this += 1; return result; }
  Modular operator--(int) { Modular result(*this); *this -= 1; return result; }
  Modular operator-() const { return Modular(-value); }
  
  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, int>::value, Modular>::type& operator*=(const Modular& rhs) {
#ifdef _WIN32
    uint64_t x = static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value);
    uint32_t xh = static_cast<uint32_t>(x >> 32), xl = static_cast<uint32_t>(x), d, m;
    asm(
      "divl %4; \n\t"
      : "=a" (d), "=d" (m)
      : "d" (xh), "a" (xl), "r" (mod())
    );
    value = m;
#else
    value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
#endif
    return *this;
  }
  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) {
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  }
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(value * rhs.value);
    return *this;
  }
  
  Modular& operator/=(const Modular& other) { return *this *= Modular(inverse(other.value, mod())); }
  
  friend const Type& abs(const Modular& x) { return x.value; }
  
  template <typename U>
  friend bool operator==(const Modular<U>& lhs, const Modular<U>& rhs);
  
  template <typename U>
  friend bool operator<(const Modular<U>& lhs, const Modular<U>& rhs);
  
  template <typename V, typename U>
  friend V& operator>>(V& stream, Modular<U>& number);
  
 private:
  Type value;
};
  
template <typename T> bool operator==(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value == rhs.value; }
template <typename T, typename U> bool operator==(const Modular<T>& lhs, U rhs) { return lhs == Modular<T>(rhs); }
template <typename T, typename U> bool operator==(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) == rhs; }
  
template <typename T> bool operator!=(const Modular<T>& lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(const Modular<T>& lhs, U rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(U lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
  
template <typename T> bool operator<(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value < rhs.value; }
  
template <typename T> Modular<T> operator+(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
  
template <typename T> Modular<T> operator-(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
  
template <typename T> Modular<T> operator*(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
  
template <typename T> Modular<T> operator/(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
  
template<typename T, typename U>
Modular<T> power(const Modular<T>& a, const U& b) {
  assert(b >= 0);
  Modular<T> x = a, res = 1;
  U p = b;
  while (p > 0) {
    if (p & 1) res *= x;
    x *= x;
    p >>= 1;
  }
  return res;
}
  
template <typename T>
bool IsZero(const Modular<T>& number) {
  return number() == 0;
}
  
template <typename T>
string to_string(const Modular<T>& number) {
  return to_string(number());
}
  
// U == std::ostream? but done this way because of fastoutput
template <typename U, typename T>
U& operator<<(U& stream, const Modular<T>& number) {
  return stream << number();
}
  
// U == std::istream? but done this way because of fastinput
template <typename U, typename T>
U& operator>>(U& stream, Modular<T>& number) {
  typename common_type<typename Modular<T>::Type, long long>::type x;
  stream >> x;
  number.value = Modular<T>::normalize(x);
  return stream;
}
  
struct MOD {
    static int value;
};
int MOD::value = 
//998244353;
 1e9+7;
using Mint = Modular<MOD>;
typedef vector<Mint> vm;
typedef vector<vm> vvm;
 
vector<Mint> fac, ifac;
void initFac(int N) {
    fac.resize(N + 1);
    ifac.resize(N + 1);
    fac[0] = ifac[0] = 1;
    rep(i, 1, N) {
        fac[i] = fac[i - 1] * i;
    }
    ifac[N] = 1 / fac[N];
    per(i, N - 1, 0) {
        ifac[i] = (i + 1) * ifac[i + 1];
    }
}
  
Mint C(int m, int n) {
    if (m < n || n < 0) return 0;
    return fac[m] * ifac[n] * ifac[m - n]; 
}
  
Mint P(int m, int n) {
    if (m < n || n < 0) return 0;
    return fac[m] * ifac[m - n];
}
const int mod = 998244353;
LL gcd(LL x, LL y){return !y?x:gcd(y, x%y);}
LL lcm(LL x, LL y){return x/gcd(x, y)*y;}
LL max(LL x, LL y){return x > y ? x : y;}
LL min(LL x, LL y){return x < y ? x: y;}
LL Mod(LL x, int mod){return (x % mod + mod) % mod;}
 
LL qml(LL x, LL y, LL mod){
    LL res = 1, cur = x;
    while(y){
        if(y&1) res = res*cur % mod;
        cur = cur * cur % mod;
        y >>= 1;
    }   
    return res % mod;
} 
 
 
template<class T, T (*mdy)(T, T), T (*op)(T, T), T (*e)()>
struct BIT{
    #ifndef lowbit
    #define lowbit(x) (x & (-x));
    #endif
    int n;
    std::vector<T> t, a;
    BIT():BIT(0){}
    explicit BIT(int n):BIT(std::vector<T>(n, e())){}
    explicit BIT(const std::vector<T>& v):n((int)v.size()){
        t.resize(n + 1, e());
        a = v;
        for(int i = 1; i <= n; ++i){
            t[i] = mdy(a[i - 1], t[i]);
        }
        for(int i = 1; i <= n; ++i){
            int j = i + lowbit(i);
            if(j <= n)
                t[j] = op(t[j], t[i]);
        }
    }
 
    void add(int i, T x){
        x = mdy(x, a[i]);
        a[i] = op(a[i], x); 
        while (i <= n){
            t[i] = op(t[i], x);
            i += lowbit(i);
        }
    }
 
    T sum(int i){
        T ans = e();
        while (i > 0){
            ans = op(ans, t[i]);
            i -= lowbit(i);
        }
        return ans;
    }
    /* 1-index [l, r] */
    T sum(int i, int j){
        return sum(j) - sum(i - 1);
    }
    template<bool (*f)(T)> int max_right(int l) const {
        return max_right(l, [](T x) { return f(x); });
    }
    //计算最大的符合条件前缀
    template<class G>
    int max_right(int l, G g){
        T tot = e();
        int x = 0;
        for(int i = log2(n); ~i; --i){
            x += (1 << i);
            if(x > n || !g(op(tot, t[x])))
                x -= (1 << i);
            else
                tot = op(tot, t[x]);
        }
        return x;
    }
/*
href: https://mingshan.fun/2019/11/29/binary-indexed-tree/
note:
    C[i] --> [i - lowbit(i) + 1, i]
    father of i --> i + lowbit(i)
    node number of i --> lowbit(i)
*/
};
//int f = 1;//1区间加,0区间赋值
//ll mdy(ll a, ll b){
//    if(f)
//        return a;
//    return a - b;
//}
//
//ll op(ll a, ll b){
//    return a + b;
//}
//ll e(){
//    return 0;
//}
// BIT<ll, mdy, op, e> bit(n);
 
class UF {
public:
    int n, comp_cnt;
    vector<int> fa, sz;
     
public:
    UF(int _n): n(_n), comp_cnt(_n), fa(_n), sz(_n, 1) {
        iota(fa.begi/n(), fa.end(), 0);
    }
     
    int findset(int x) {
        return fa[x] == x ? x : fa[x] = findset(fa[x]);
    }
     
    bool unite(int x, int y) {
        x = findset(x), y = findset(y);
        if (x == y) return false;
        if (sz[x] < sz[y]) swap(x, y);
        fa[y] = x, sz[x] += sz[y];
        --comp_cnt;
        return true;
    }
     
    bool connected(int x, int y) {
        return findset(x) == findset(y);
    }
};
 
template<class T>
struct disc{
    vector<T> d;
    inline void insert(T k){d.push_back(k);}
    inline void init(){
        sort(d.begin(),d.end());
        d.erase(unique(d.begin(),d.end()),d.end());
    }
    inline int size(){return d.size();}
    inline int query(T k){
        return lower_bound(d.begin(),d.end(),k)-d.begin()+1;
    }
    inline void clear(){vector<T>().swap(d);}
};
int d[4][2] = {0, 1, 1, 0, -1, 0, 0, -1};
//ll a[N] = {0};
//int b[N] = {0};
 
void solve(){


} 
int main(){
//    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//  srand((unsigned int)time(NULL));
//  cout<<fixed<<setprecision(10);
  //
  //  
  //
  //
}
