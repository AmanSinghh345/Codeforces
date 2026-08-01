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
long long find(int target,int k,int d,int usedBig,vector<vector<long long >>& dp){
    if(target<0) return 0;
    if(target==0) return usedBig;
    if(dp[target][usedBig]!=-1) return dp[target][usedBig];
    ll take=0;
    for(int i=1;i<=k;i++){
        int newUsedBig=usedBig || i>=d;
        take=(take+find(target-i,k,d,newUsedBig,dp))%MOD;
    }
    return dp[target][usedBig]=take;
}
void solve() {
    int n,k,d;
    cin>>n>>k>>d;
    vector<vector<long long >> dp(n+1,vector<long long>(2,0));
    dp[0][1]=0;
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j<0) break;
            if(j<d){
                dp[i][0]=(dp[i][0]+dp[i-j][0])%MOD;
                dp[i][1]=(dp[i][1]+dp[i-j][1])%MOD;
            }
            else  dp[i][1]=(dp[i][1]+dp[i-j][0]+dp[i-j][1])%MOD;
        }
    }
    cout<<dp[n][1]<<endl;
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