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
    vector<pair<long long ,long long >> arr; // {min-in,out}
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<long long> a(k);
        for(int i=0;i<k;i++) cin>>a[i];
        
        long long  req=0;
        for(int i=0;i<k;i++){
           req=max(req,a[i]-i+1);
        }
        arr.push_back({req,k});
    }
 
    sort(arr.begin(),arr.end());
    ll ans=arr[0].first;
    ll curr=ans;
 
    for(int i=0;i<n;i++){
        if(curr<arr[i].first){
            ans+=(arr[i].first-curr);
            curr=arr[i].first;
        }
        curr+=arr[i].second;
    }
    cout<<ans<<endl;
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