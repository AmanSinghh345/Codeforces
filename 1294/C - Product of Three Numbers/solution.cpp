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
    long long  n;
    cin>>n;
    ll a=-1,b=-1,c=-1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            n/=i;
            break;
        }
    }
    if(a==-1) {
        cout<<"NO"<<endl;
        return;
    }
    // cout<<a<<endl;
    for(ll i=2;i*i<=n;i++){
        if(i!=a && n%i==0){
            b=i;
            n/=i;
            break;
        }
    }
    // cout<<b<<endl;
    if(b==-1){
        cout<<"NO"<<endl;
        return;
    }
    c=n;
    // cout<<c<<endl;
    if(c>1 && c!=a && c!=b){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else cout<<"NO"<<endl;
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