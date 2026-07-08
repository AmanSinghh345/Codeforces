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
typedef vector<int> vi;
typedef vector<ll> vl;
 
template<typename T>
istream& operator>>(istream &in, vector<T> &v) {
    for (auto &it : v) cin >> it; return in;
}
 
template<typename T>
ostream& operator<<(ostream &out, const vector<T> &v) {
    for (auto &it : v) out << it << " "; return out;
}
 
void solve() {
    int n, k;
    ll x;
    cin >> n >> k >> x;
    vl a(n);
    cin >> a;
    
    ll T = SUM(a);
    vl b(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        b[i] = b[i - 1] + a[i - 1];
    }
    
    ll X_val = k * T - x;
    ll ans = 0;
    if (X_val < 0) {
        cout << 0 << endl;
        return;
    }
    
    for (int r = 0; r < n; r++) {
        if (b[r] > X_val) C;
        ll max_p = (X_val - b[r]) / T;
        ans += min((ll)k, max_p + 1);
    }
    
    cout << ans << endl;
}
 
int32_t main() {
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}