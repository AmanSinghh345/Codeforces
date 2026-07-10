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
ll getSum(ll n,ll k){
    if(n<=k){
        return  n*(n+1)/2;
    }
    else {
        ll d=n-k;
        return  k*(k+1)/2 + d*(k-1+k-d)/2;
    }
}
void solve() {
    ll k,x;
    cin>>k>>x;
    ll l=1,h=2*k-1,ans=2*k-1;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(getSum(mid,k)>=x){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<"
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