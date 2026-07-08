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
    map<long long ,long long > umap;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        umap[a[i]]++;
        sum+=a[i];
    }
 
    vector<long long> ans;
    for(int i=0;i<n;i++){
        long long  req=sum-a[i];
        if(req&1) continue;
        if(umap.count(req/2)){
            if(req/2==a[i] && umap[req/2]>1) {
                ans.push_back(i+1);
                continue;
            }
            else if(req/2!=a[i]){
                ans.push_back(i+1);
            }
        }
    }
    cout<<(int)ans.size()<<'
';
    for(int x:ans){
        cout<<x<<" ";
    }
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