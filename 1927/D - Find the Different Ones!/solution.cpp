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
    vector<int> diff(n,-1);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            diff[i]=i-1;
        }
        else diff[i]=diff[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l , r;
        cin>>l>>r;
        l--,r--;
        if(a[l]!=a[r]){
            cout<<l+1<<" "<<r+1<<endl;
        }
        else if(diff[l]==-1 && diff[r]==-1){
            cout<<-1<<" "<<-1<<endl;
        }
        else if(diff[r]<l){
            cout<<-1<<" "<<-1<<endl;
        }
        else {
            cout<<diff[r]+1<<" "<<r+1<<endl;
        }
    }
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