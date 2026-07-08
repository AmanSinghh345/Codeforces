#include <bits/stdc++.h>
using namespace std;
 
// Speed
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
// Macros
#define IOtext freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define digCnt(n) ((int)log10(n) + 1)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define B break
#define C continue
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
 
ll arr[32][32];
 
void precompute() {
    for (int i = 0; i < 32; i++) {
        arr[i][0] = arr[i][i] = 1;
        for (int j = 1; j < i; j++)
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
    }
}
 
void solve() {
    ll n, k;
    cin >> n >> k;
 
 
    int m = 0;
    ll temp = n;
    while (temp > 1) {
        temp >>= 1;
        m++;
    }
 
    
    if (k >= 2 * m) {
        cout << 0 << endl;
        return;
    }
 
    ll cnt = 0;
 
    
    if (1 <= k)
        cnt++;
 
    
    for (int r = 1; r < m; r++) {
        int maxi = min(r, (int)k - r - 1);
        if (maxi < 0) continue;
 
        for (int p = 0; p <= maxi; p++)
            cnt += arr[r][p];
    }
 
 
    if (m + 1 <= k)
        cnt++;
 
    cout << n - cnt << endl;
}
 
int32_t main() {
    fastio();
    precompute();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}