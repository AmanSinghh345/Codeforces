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
    ll n,m;
    cin>>n>>m;
 
    int two=0;
    int five=0;
 
    ll temp=n;
    while(temp>0 && temp%2==0){
        two++;
        temp/=2;
    }
    while(temp>0 && temp%5==0){
        five++;
        temp/=5;
    }
    ll k=1;
    while(two<five && k*2<=m){
        k*=2;
        two++;
    }
    while(five<two && k*5<=m){
        k*=5;
        five++;
    }
    while(k*10<=m){
        k*=10;
    }
 
    if(k==1){
        cout<<n*m<<endl;
    }
    else {
        k*=(m/k);
        cout<<n*k<<endl;
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