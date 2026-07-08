#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define endl '
'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
 
using vi = vector<int>;
using vl = vector<ll>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
 
const ll MOD = 1e9 + 7;
 
ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a) {
    return modpow(a, MOD - 2);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool sorted = true;
for(int i=0;i<n-1;i++){
    if(a[i] > a[i+1]) sorted = false;
}
 
if(sorted){
    cout << 0 << "
";
    return;
}
 
if(a[n-2] > a[n-1]){
    cout << -1 << "
";
    return;
}
 
if(a[n-1] < 0){
    cout << -1 << "
";
    return;
}
cout<<n-2<<"
";
for(int i=0;i<n-2;i++){
    cout<<i+1<<" "<<n-1<<" "<<n<<"
";
}
}
 
int main() {
    fastio();
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}