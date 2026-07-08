#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll andRange(ll a, ll b) {
    ll mask = ~0LL;
    while ((a & mask) != (b & mask)) {
        mask <<= 1;
    }
    return a & mask;
}
 
void solve() {
    ll n, x;
    cin >> n >> x;
 
    if (n == x) { cout << n << "
"; return; }
    if ((n & x) != x || x > n) { cout << -1 << "
"; return; }
 
    ll g = (n & (~x)); 
 
 
    int b = 63 - __builtin_clzll(g);
 
    ll step = 1LL << (b + 1);
    ll m = ((n / step) + 1) * step;
 
    ll result = andRange(n, m);
 
    if (result == x) cout << m << "
";
    else cout << -1 << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}