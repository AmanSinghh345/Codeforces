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
vector<bool> isPrime;
void precompute(){
    isPrime.assign(2e5+9,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=2e5+7;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=2e5+7;j+=i){
                isPrime[j]=false;
            }
        }
    }
}
void solve() {
    int n;
    cin>>n;
    if(isPrime[n+1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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