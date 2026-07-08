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
        if (b & 1) res = (res * a);
        a = (a * a) ;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a) {
    return modpow(a, MOD - 2);
}
vector<bool> arr(1e6+1,false);
void precompute(){
    for(long long  i=2;i<1000;i++){
    for(long long  ex=2;;ex++){
        long long  val=(modpow(i,ex+1)-i)/(i-1)+1;
        if(val>1e6) break;
        arr[val]=true;
    }
}
 
 
 
}
 
void solve() {
    int x;
    cin>>x;
    if(arr[x]) cout<<"YES"<<"
";
    else cout<<"NO"<<"
";
    return ;
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