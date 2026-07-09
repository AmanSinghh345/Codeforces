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
    int n,m;
    cin>>n>>m;
    vector<long long> a(n);
    map<long long ,long long > freq;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        freq[a[i]]++;
    }
 
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
 
    int N=a.size();
 
    long long ans=0;
    long long prefix=1;
 
    if(N<m) {
        cout<<0<<"
";
        return;
    }
 
    for(int i=0;i<m;i++){
        prefix=(prefix*freq[a[i]])%MOD;
    }
    if(a[m-1]-a[0]<m){
        ans=prefix;
    }
 
    int r=m;
    for(int l=1;l<=N-m;l++,r++){
        long long diff=a[r]-a[l];
        prefix=(prefix*modinv(freq[a[l-1]]))%MOD;
        prefix=(prefix*freq[a[r]])%MOD;
        if(diff<m){
            ans=(ans+prefix)%MOD;
        }
    }
    cout<<ans<<"
";
    return ;
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