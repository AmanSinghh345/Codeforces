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
int f(string s,char tar,int l,int r){
        int ans=INT_MAX;
        int cnt=0;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==tar) {l++; cnt++;}
            else if(s[r]==tar) {r--; cnt++;}
            else return ans;
        }
        return cnt;
}
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    char a,b;
    int l=0,r=n-1;
    while(l<=r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else break;
    }
    if(l>=r) {
        cout<<0<<"
";
        return;
    }
    a=s[l],b=s[r];
    int ans=min(f(s,a,l,r),f(s,b,l,r));
    if(ans==INT_MAX) cout<<-1<<"
";
    else cout<<ans<<"
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