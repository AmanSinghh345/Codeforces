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
bool check(ll ops,ll sum,ll& k,vector<long long>& a){
    if(sum-ops<=k) return true;
    for(ll i=a.size()-1;i>=max(1LL,(long long)a.size()-ops);i--){
        sum-=a[i];
        ll rcnt=a.size()-i;
        ll lcnt=ops-rcnt;
        ll mini=a[0]-lcnt;
        ll currSum=sum-a[0]+ rcnt*mini + mini;
        if(currSum<=k) return true; 
    }
    return false;
}
void solve() {
    long long n,k;
    cin>>n>>k;
 
    vector<long long > a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll ans=LLONG_MAX;
    ll sum=accumulate(a.begin(),a.end(),0LL);
    ll low =0,high=1e15;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid,sum,k,a)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<endl;
 
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