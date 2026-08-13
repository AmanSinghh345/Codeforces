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
    ll n;
    cin>>n;
    vector<ll> uni(n);
    for(int i=0;i<n;i++) cin>>uni[i];
    vector<ll> temp=uni;
    sort(temp.begin(),temp.end());
    temp.erase(unique(temp.begin(),temp.end()),temp.end());
    
    map<ll,ll> mpInd;
    for(int i=0;i<temp.size();i++) mpInd[temp[i]]=i;
 
 
    vector<vector<long long>> gg(temp.size());
 
    for(int i=0;i<n;i++) {
        ll skill;
        cin>>skill;
        // cout<<skill<<endl;
        // cout<<mpInd[uni[i]]<<endl;
        gg[mpInd[uni[i]]].push_back(skill);
    }
    // for(auto it : gg){
    //     for(ll x:it) cout<<x<<" ";
    //     cout<<endl;
    // }
    for(ll i=0;i<gg.size();i++){
        sort(gg[i].rbegin(),gg[i].rend());
    }
    for(ll i=0;i<gg.size();i++){
 
        for(int j=1;j<gg[i].size();j++){
            gg[i][j]+=gg[i][j-1];
        }
    }
    // for(auto it : gg){
    //     for(ll x : it){
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<ll> ans(n + 1, 0);
 
for (auto &v : gg) {
    int m = v.size();
 
    for (int k = 1; k <= m; k++) {
        int ind = (m / k) * k - 1;
        ans[k] += v[ind];
    }
}
 
for (int k = 1; k <= n; k++) {
    cout << ans[k] << " ";
}
cout << endl;
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