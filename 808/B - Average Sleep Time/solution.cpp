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
    vector<long double> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long double> prefix(n+1,0);
    for(int i=1;i<=n;i++) prefix[i]=prefix[i-1]+a[i-1];
 
    long double sum=0;
    int l=1,r=k;
    while(r<n+1){
        sum+=prefix[r];
        sum-=prefix[l-1];
        r++;
        l++;
    }
    long double ans=sum/(double)(n-k+1);
    cout<<fixed<<setprecision(10)<<ans<<"
";
    return ;
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