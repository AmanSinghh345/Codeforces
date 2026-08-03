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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    sort(a.begin(),a.end());
 
    auto check=[&](int k){
        for(int i=0;i<k;i++){
            if(a[i]>=a[n-k-1+i]) return false;
        }
        return true;
    };
    int l=0,h=(n-1)/2;
    while(l<h){
        int mid=l+(h-l+1)/2;
        if(check(mid)) l=mid;
        else h=mid-1;
    }
    int k=l;
 
    vector<int> ans;
    for(int i=0;i<k;i++){
        ans.push_back(a[n-k-1+i]);
        ans.push_back(a[i]);
    }
    ans.push_back(a[n-1]);
    for(int i=k;i<n-k-1;i++) ans.push_back(a[i]);
    cout<<k<<endl;
    for(int x:ans) cout<<x<<" ";
 
}
 
int main() {
    fastio();
 
    int t = 1;
 
    while (t--) {
        solve();
    }
 
    return 0;
}