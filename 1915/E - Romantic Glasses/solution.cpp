#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
 
void solve() {
    int n;
    cin >> n;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    set<ll> seen;
 
    ll pref = 0;
    seen.insert(0);
 
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) pref += a[i];
        else pref -= a[i];
 
        if (seen.count(pref)) {
            cout << "YES
";
            return;
        }
 
        seen.insert(pref);
    }
 
    cout << "NO
";
}
 
int main() {
    fastio();
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}