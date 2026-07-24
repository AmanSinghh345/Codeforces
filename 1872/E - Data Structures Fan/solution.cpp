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
    string s;
    cin>>s;
    vector<int> prefXor(n+1);
    prefXor[0]=0;
    for(int i=1;i<=n;i++) prefXor[i]=(prefXor[i-1]^a[i-1]);
    int xorOne=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') xorOne^=a[i];
    }
    int total=prefXor[n];
  
 
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int type;
        cin>>type;
        if(type==2){
            int g;
            cin>>g;
            if(g==1) cout<<xorOne<<" ";
            else cout<<(total^xorOne)<<" ";
            continue;
        }
        else {
            int l,r;
            cin>>l>>r;
            xorOne^=(prefXor[r]^prefXor[l-1]);
        }
    }
    cout<<endl;
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