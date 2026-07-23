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
 
int find(int i,vector<int>& a,vector<int>& dp){
    int n=a.size();
    //base case 
    if(i==n) return 0;
 
    if(dp[i]!=-1) return dp[i];
    //can take
    int take=INT_MAX;
    if(a[i]+i<n){
        take=0+find(i+a[i]+1,a,dp);
    }
    //not - take
    int notTake=1+find(i+1,a,dp);
 
    return dp[i]=min(take,notTake);
}
void solve() {
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> dp(n+1,-1);
  
    // int i=0;
    // int ans=find(i,a,dp);
    // cout<<ans<<endl;
    // return;
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
        
            int take=INT_MAX;
            if(a[i]+i<n){
                take=dp[i+a[i]+1];
            }
            int notTake=1+dp[i+1];
            dp[i]=min(take,notTake);
    }
    cout<<dp[0]<<endl;
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