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
 
    vector<int> bit(32,0);
    for(int i=0;i<32;i++){
        int cnt=0;
        for(int x:a){
            if((x>>i)&1) cnt++;
        }
        bit[i]=cnt;
    }
 
    int totalGcd=0;
    for(int i=0;i<32;i++){
        totalGcd=gcd(totalGcd,bit[i]);
    }
    if(totalGcd==0){
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<"
";
        return;
    }
    vector<int> divisors;
    for(int i=1;i*i<=totalGcd;i++){
        if(totalGcd%i==0){
            divisors.push_back(i);
            if(totalGcd/i!=i){
                divisors.push_back(totalGcd/i);
            }
        }
    }
    // if(divisors.empty()){
    //     cout<<1<<"
";
    //     return;
    // }
    sort(divisors.begin(),divisors.end());
    for(int x:divisors) cout<<x<<" ";
    cout<<'
';
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