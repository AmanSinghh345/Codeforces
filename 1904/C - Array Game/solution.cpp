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
    int n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    if(k>=3) {
        cout<<0<<endl;
        return;
    }
    sort(a.begin(),a.end());
    ll diffMini=LLONG_MAX;
    for(int i=0;i<n-1;i++) diffMini=min(diffMini,a[i+1]-a[i]);
    if(k==1){
        cout<<min(diffMini,a[0])<<endl;
        return;
    }
    ll ans=min(a[0],diffMini);
    if(k==2){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                ll diff=a[j]-a[i];
 
                auto it=lower_bound(a.begin(),a.end(),diff);
                if(it!=a.end()){
                    ans=min(ans,abs(*it-diff));
                }
                if(it!=a.begin()){
                    --it;
                    ans=min(ans,abs(*it-diff));
                }
            }
        }
        cout<<ans<<endl;
        return;
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