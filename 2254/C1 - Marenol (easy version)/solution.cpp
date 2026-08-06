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
    string a,b;
    cin>>a;
    cin>>b;
    if(a==b) {
        cout<<"YES"<<endl;
        return;
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++) {
        if(a[i]=='1'){
            if(i&1) cnt1++;
            else cnt2++;
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]=='1'){
            if(i&1) cnt1--;
            else cnt2--;
        }
    }
    if(cnt1==0 && cnt2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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