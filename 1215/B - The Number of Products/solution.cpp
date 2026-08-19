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
    ll  n;
    cin>>n;
    ll neg_cnt=0;
    ll even_prefix=1;
    ll odd_prefix=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<0) cnt++;
        if(cnt&1){
            neg_cnt+=even_prefix;
            odd_prefix++;
        }
        else{
            neg_cnt+=odd_prefix;
            even_prefix++;
        }
    }   
    cout<<neg_cnt<<" "<<(1LL*n*(n+1))/2-neg_cnt<<endl;
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