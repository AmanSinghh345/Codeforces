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
    vector<long long > b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++) cin>>b[j];
 
    vector<long long> ans(n,0);
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int pos=j-i;
    //         ans[j]+=min(a[pos],b[j]);
    //         a[pos]-=min(a[pos],b[j]);
    //     }
    // }
    // for(ll  x  : ans) cout<<x<<" ";
    // cout<<endl;
    // return;
 
    vector<long long> mul(n,0);
    vector<long long> add(n,0);
 
    vector<long long > pref(n+1,0);
    for(int i=1;i<=n;i++) pref[i]=pref[i-1]+b[i-1];
 
    for(int i=0;i<n;i++){
        int it=upper_bound(pref.begin()+i+1,pref.end(),a[i]+pref[i])-pref.begin();
        mul[i]++;
        if(it-1<n){
            mul[it-1]--;
            add[it-1]+=pref[i]+a[i]-pref[it-1];
        }
    }
    for(int i=1;i<n;i++){
        mul[i]+=mul[i-1];
    }
    for(int i=0;i<n;i++){
        ans[i]=add[i];
        ans[i]+=(b[i]*mul[i]);
    }
    for(ll x: ans ) cout<<x<<" ";
    cout<<endl;
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