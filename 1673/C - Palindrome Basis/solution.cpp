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
 
bool isPallindrome(int n){
    string s=to_string(n);
    string r=s;
    reverse(r.begin(),r.end());
    return s==r;
}
vector<long long> dp;
void precompute(){
    dp.assign(40007,0);
    dp[0]=1;
    vector<int> a;
    for(int i=1;i<=40001;i++){
        if(isPallindrome(i)) a.push_back(i);
    }
 
    for(int x : a){
        for(int j=x;j<=40001;j++){
            dp[j]=(dp[j]+dp[j-x])%MOD;
        }
    }
    
}
 
void solve() {
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
 
int main() {
    fastio();
    precompute();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}