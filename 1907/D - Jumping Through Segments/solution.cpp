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
bool statisfy(int mid,vector<pair<int,int>>& arr){
    int  reachableleft=0,reachableRight=0;
    for(auto it : arr){
        int l=it.first;
        int r=it.second;
        int nl=max(reachableleft-mid,l);
        int nr=min(r,reachableRight+mid);
        if(nl>nr) return false;
        reachableleft=nl;
        reachableRight=nr;
    }
    return true;
}
void solve() {
    int n;
    cin>>n;
    
    int l=0,h=0;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        h=max(h,max(u,v));
        arr.push_back({u,v});
    }
    int ans=h;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(statisfy(mid,arr)) {
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
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