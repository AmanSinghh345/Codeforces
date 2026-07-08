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
    vector<vector<int>> a(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    if(!((n+m)&1)) {
        cout<<"NO"<<endl;
        return;
    }
    vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>> (m));
    dp[0][0]={a[0][0],a[0][0]};
    for(int i=1;i<n;i++){
        int val=dp[i-1][0].first+a[i][0];
        dp[i][0]={val,val};
    }
    for(int j=1;j<m;j++){
        int val=dp[0][j-1].first+a[0][j];
        dp[0][j]={val,val};
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            int maxi=max(dp[i-1][j].first,dp[i][j-1].first);
            int mini=min(dp[i-1][j].second,dp[i][j-1].second);
            dp[i][j].first=maxi+a[i][j];
            dp[i][j].second=mini+a[i][j];
        }
    }
  
    if(dp[n-1][m-1].second<=0 && dp[n-1][m-1].first>=0) cout<<"YES"<<"
";
    else cout<<"NO"<<"
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