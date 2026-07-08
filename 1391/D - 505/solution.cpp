#include <bits/stdc++.h>
using namespace std;
 
// Speed
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
// Macros
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pm cout << "-1" << endl
#define ps(x,y) fixed << setprecision(y) << x
#define endl '
'
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long double> vlld;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef set<int> seti;
typedef set<ll> setll;
typedef priority_queue<ll> pqll;
typedef priority_queue<ll, vl, greater<ll>> pqllmn;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
 
template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
    cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";
}
template <class T> void _print(vector<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}
template <class T> void _print(set<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}
template <class T> void _print(multiset<T> v) {
    cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
    cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]";
}
 
// Operator overloads
template<typename T>
istream& operator>>(istream &in, vector<T> &v) {
    for (auto &it : v) cin >> it; return in;
}
template<typename T>
ostream& operator<<(ostream &out, const vector<T> &v) {
    for (auto &it : v) out << it << " "; return out;
}
template<typename T, typename V>
ostream& operator<<(ostream &out, const map<T, V> &c) {
    for (auto &it : c) out << it.first << " " << it.second << endl; return out;
}
 
// Modular arithmetic utilities
const ll mod = 1000000007;
 
ll modpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a) {
    return modpow(a, mod - 2);
}
 
 
const int N = 5e5 + 1;
int n, m;
int a[4][N];
int dp3[N][8];
int dp2[N][4];
bool ok3[8][8];
bool ok2[4][4];
 
void fill3() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            bool bad = 0;
            for (int st = 0; st < 2; st++) {
                int bits = (bool)(i & (1 << st)) + (bool)(i & (1 << (st + 1)));
                bits += (bool)(j & (1 << st)) + (bool)(j & (1 << (st + 1)));
                if (bits % 2 == 0) {
                    bad = 1;
                }
            }
            if (!bad) {
                ok3[i][j] = 1;
            }
        }
    }
}
 
void fill2() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            bool bad = 0;
            for (int st = 0; st < 1; st++) {
                int bits = (bool)(i & (1 << st)) + (bool)(i & (1 << (st + 1)));
                bits += (bool)(j & (1 << st)) + (bool)(j & (1 << (st + 1)));
                if (bits % 2 == 0) {
                    bad = 1;
                }
            }
            if (!bad) {
                ok2[i][j] = 1;
            }
        }
    }
}
 
void solve2() {
    for (int i = 1; i <= m; i++) {
        int mask = a[1][i] + 2 * a[2][i];
        for (int cur = 0; cur < 4; cur++) {
            dp2[i][cur] = 1e9;
            for (int prev = 0; prev < 4; prev++) {
                if (!ok2[prev][cur]) continue;
                dp2[i][cur] = min(dp2[i][cur], dp2[i - 1][prev] + __builtin_popcount(cur ^ mask));
            }
        }
    }
    int ans = 1e9;
    for (int i = 0; i < 4; i++) ans = min(ans, dp2[m][i]);
    cout << ans;
}
 
void solve3() {
    for (int i = 1; i <= m; i++) {
        int mask = a[1][i] + 2 * a[2][i] + 4 * a[3][i];
        for (int cur = 0; cur < 8; cur++) {
            dp3[i][cur] = 1e9;
            for (int prev = 0; prev < 8; prev++) {
                if (!ok3[prev][cur]) continue;
                dp3[i][cur] = min(dp3[i][cur], dp3[i - 1][prev] + __builtin_popcount(cur ^ mask));
            }
        }
    }
    int ans = 1e9;
    for (int i = 0; i < 8; i++) ans = min(ans, dp3[m][i]);
    cout << ans;
}
 
void solve() {
    cin >> n >> m;
    
    
    if (min(n, m) > 3) {
        cout << -1;
        return;
    }
    if (min(n, m) == 1) {
        cout << 0;
        return;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char o; cin >> o;
            a[i][j] = o - '0';
        }
    }
    
    if (n == 3) solve3();
    else solve2();
}
 
int main() {
    fastio();
    
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    
    
    fill2();
    fill3();
    
    int t = 1;
    
    while (t--) {
        solve();
        cout << endl;
    }
    
    return 0;
}