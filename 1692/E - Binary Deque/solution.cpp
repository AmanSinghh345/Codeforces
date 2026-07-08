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
    int n,s;
    cin>>n>>s;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    vi pref(n+1);
    pref[0]=0;
    for(int i=1;i<=n;i++){
        pref[i]=a[i-1]+pref[i-1];
    }
 
    if(pref[n]==s) {
        cout<<0<<"
";
        return ;
    }
    if(pref[n]<s){
        cout<<-1<<"
";
        return;
    }
 
    int ans=INT_MAX;
    for(int l=0;l<=n;l++){
        int target=pref[l]+s;
        auto it=upper_bound(pref.begin()+l,pref.end(),target);
        it--;
        if(*it==target){
            int r=it-pref.begin();
             ans=min(ans,l+n-r);
        }
       
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