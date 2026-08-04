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
ll find(int i,int cantake,vector<int>& a,vector<int>& b,vector<vector<long long >>& dp){
    int n=a.size();
    if(i==n) return 0;
    if(dp[i][cantake]!=-1) return dp[i][cantake];
    long long  res=LLONG_MIN;
    if(cantake==0){
        res=max(res,a[i]+find(i+1,2,a,b,dp));
        res=max(res,b[i]+find(i+1,1,a,b,dp));
        
    }
    else if(cantake==1){
        res=max(res,a[i]+find(i+1,2,a,b,dp));
    }
    else {
        res=max(res,b[i]+find(i+1,1,a,b,dp));
    }
    res=max(res,0+find(i+1,0,a,b,dp));
    return dp[i][cantake]=max(dp[i][cantake],res);
 
 
}
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    vector<long long > prev(3,0);
    // find(0,0,a,b,dp);
    // cout<<max({dp[0][0],dp[0][1],dp[0][2]})<<endl;
    for(int i=n-1;i>=0;i--){
        vector<long long > curr(3,0);
        curr[0]=max({prev[1],prev[2],prev[0]});
        curr[1]=max({a[i]+prev[0],a[i]+prev[2]});
        curr[2]=max({b[i]+prev[0],b[i]+prev[1]});
        prev=curr;
    }
    cout<<max({prev[0],prev[1],prev[2]})<<endl;
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