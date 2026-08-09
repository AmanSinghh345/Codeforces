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
    vector<vector<int>> factors(n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                factors[i].push_back(j);
                if(i/j!=j){
                    factors[i].push_back(i/j);
                }
            }
        }
    }
 
    vector<vector<int>> dp(k+1,vector<int>(n+1,0));
 
    for(int i=1;i<=n;i++) dp[1][i]=1;
 
    for(int i=2;i<=k;i++){
        for(int j=1;j<=n;j++){
        
            for(auto x:factors[j]) dp[i][j]=(dp[i][j]+dp[i-1][x])%MOD;
        }
    }
    int ans=0;
    for(int j=1;j<=n;j++){
        ans=(ans+dp[k][j])%MOD;
    }
    cout<<ans<<endl;
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