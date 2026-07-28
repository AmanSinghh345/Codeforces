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
    ll n,a,b;
    cin>>n>>a>>b;
    vector<long long> arr(n+1);
    arr[0]=0;
    for(ll i=1;i<=n;i++) cin>>arr[i];
    vector<long long> suff(n+1,0);
    suff[n]=arr[n];
    for(ll i=n-1;i>=0;i--) suff[i]=suff[i+1]+arr[i];
    ll cost=LLONG_MAX;
   
    for(ll i=0;i<n;i++){
        ll val=arr[i]*(a+b)+(suff[i+1]-(n-i)*arr[i])*b;
        cost=min(cost,val);
    }
    cout<<cost<<endl;
 
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