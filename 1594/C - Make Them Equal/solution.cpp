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
    char target;
    cin>>n>>target;
    string s;
    cin>>s;
    bool f=true;
    for(char ch : s){
        if(ch!=target){
            f=false;
            break;
        }
    }
    if(f){
        cout<<0<<"
";
        return;
    }
 
    for(int i=n;i>=1;i--){
        bool ok=true;
        for(int j=i;j<=n;j+=i){
            if(s[j-1]!=target) {
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<1<<"
";
            cout<<i<<"
";
            return;
        }
    }
    cout<<2<<"
";
    cout<<n-1<<" "<<n<<"
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