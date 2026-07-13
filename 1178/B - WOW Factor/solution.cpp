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
    string s;
    cin>>s;
    int n=s.size();
    vector<long long> prefix(n+1,0);
    
    int cnt=0;
    for(int i=0;i<n;i++){
        while(s[i]=='v') {
            cnt++;
            i++;
        }
        if(cnt>0) cnt--;
        prefix[i]=cnt;
 
        cnt=0;
    }
    for(int i=1;i<=n;i++) prefix[i]+=prefix[i-1];
    // for(int x:prefix) cout<<x<<" ";
 
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='o'){
            ll left=prefix[i-1];
        
            ll right=prefix[n]-prefix[i-1];
            ans+=(left*right);
            // cout<<i-1<<" "<<left<<" "<<right<<endl;
        }
    }
    cout<<ans<<"
";
    return;
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