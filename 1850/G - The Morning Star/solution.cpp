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
    map<long long , long long > p,q,r,s;
 
    for(int i=0;i<n;i++){
        long long  x,y;
        cin>>x>>y;
        p[y]++;
        q[x]++;
        r[x+y]++;
        s[x-y]++;
    }
    long long  cnt=0;
    for(auto& [key,val] : p){
        long long temp= val*(val-1);
        cnt+=temp;
    }
    for(auto&[key,val]:q){
        long long temp= val*(val-1);
        cnt+=temp;
    }
    for(auto&[key,val]:r){
        long long temp= val*(val-1);
        cnt+=temp;
    }
    for(auto&[key,val]:s){
        long long temp= val*(val-1);
        cnt+=temp;
    }
    cout<<cnt<<"
";
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