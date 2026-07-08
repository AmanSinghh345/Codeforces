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
    int n,x;
    cin>>n>>x;
    vl a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    long long sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
 
    int prevDay=-1;
    long long ans=0;
    for(int i=n-1;i>=0;i--){
        int currDay=-1;
        if(sum>x){
            sum-=a[i];
            continue;
        }
        currDay=(x-sum)/(i+1);
 
        ans+=1LL*(i+1)*(currDay-prevDay);   
        prevDay=currDay;
        sum-=a[i];
    }
    cout<<ans<<"
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