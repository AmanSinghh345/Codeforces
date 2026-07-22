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
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
 
    int l=0,r=n-1;
    ll sum=0;
    ll ans=0;
    while(l<=r){
        if(l==r){
            ll left=a[r]-sum;
            ll req= (left+2-1)/2;
            if(a[r]==1) ans+=1;
            else
            ans+=(req+1);
            break;
        }
        if(sum+a[l]<a[r]){
            ans+=a[l];
            sum+=a[l];
            l++;
        }
        else if(sum+a[l]>a[r]){
            ll diff=a[r]-sum;
            ans+=diff;
            a[l]-=diff;
            sum=0;
            ans++;
            r--;
        }
        else if(sum+a[l]==a[r]){
            ans+=a[l];
            ans++;
            sum=0;
            l++;
            r--;
        }
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