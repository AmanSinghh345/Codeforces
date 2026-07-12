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
        cout<<1<<"
";
        cout<<a[0]<<"
";
        return;
    }
    // long long maximum=0;
    // for(int i=1;i<n;i++){
    //     maximum+=(a[i]-a[i-1]);
    // }
    vector<int> ans;
    ll val=0;
    bool inc;
    if(a[0]>a[1]) inc=false;
    else inc=true;
    ans.push_back(a[0]);
 
    for(int i=2;i<n;i++){
        if(inc){
            if(a[i-1]<a[i]) {
                continue;
            }
            else{
                ans.push_back(a[i-1]);
                inc=false;
            }
        }
        else{
            if(a[i-1]>a[i]) continue;
            else {
                ans.push_back(a[i-1]);
                inc=true;
            }
        }
    }
    ans.push_back(a[n-1]);
    cout<<(int)ans.size()<<"
";
    for(int x:ans) cout<<x<<" ";
    cout<<"
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