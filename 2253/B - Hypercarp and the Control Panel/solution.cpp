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
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int cnt=1;
    for(int i=1;i<n;i++) {
        if(a[i]!=a[i-1]) cnt++;
    }
    int res=cnt;
    for(int i=0;i<n-1;i++){
        int extra=0;
        if(i>0){
            if(a[i-1]==a[i] && a[i-1]!=a[i+1]){
                extra++;
            }
            if(a[i-1]!=a[i] && a[i-1]==a[i+1]){
                extra--;
            }
        }
        if(i+1<n-1){
            if(a[i]==a[i+2] && a[i+1]!=a[i+2]){
                extra--;
            }
            if(a[i+1]==a[i+2] && a[i]!=a[i+2]){
                extra++;
            }
        }
        res=max(res,cnt+extra);
    }
    cout<<res<<endl;
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