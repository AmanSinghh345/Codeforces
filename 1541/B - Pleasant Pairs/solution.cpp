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
    vector<long long > a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    vector<long long> pos(2*n+1,0);
    for(int i=0;i<n;i++) pos[a[i]]=i+1;
    for(long long i=1;i<=2*n;i++){
        if(pos[i]==0) continue;
        for(long long j=i+1;i*j<=2*n;j++){
            if(pos[j]==0) continue;
            if(pos[i]+pos[j]==i*j) cnt++;
        }
    }
    cout<<cnt<<"
";
    return;
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