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
    long long  n,k,x;
    cin>>n>>k>>x;
    vector<long long> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<long long> req;
    for(ll i=1;i<n;i++){
        if((a[i]-a[i-1])>x){
            long long val=(a[i]-a[i-1])/x;
            if((a[i]-a[i-1])%x==0) val--;
            req.push_back(val);  
        }
    }
    sort(req.begin(),req.end());
    int cnt=req.size();
    int i=0;
    while(i<req.size() && k>0){
        if(k>=req[i]){
            k-=req[i];
            cnt--;
        }
        i++;
    }
    cout<<cnt+1<<"
";
    return;
}
 
int main() {
    fastio();
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}