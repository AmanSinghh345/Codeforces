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
    long long sum=accumulate(a.begin(),a.end(),0LL);
    long long maxi=*max_element(a.begin(),a.end());
    if(sum&1 || maxi>sum-maxi){
        cout<<"NO"<<endl;
        return ;
    }
    else  cout<<"YES"<<endl;
    return;
    sort(a.begin(),a.end());
    int l=n-2,r=n-1;
    while(l>=0){
        int val1=a[l];
        int val2=a[r];
        if(val1==val2){
            a[l]=0;
            a[r]=0;
            r=l-1;
            l=r-1;
            continue;
        }
        else if(val1<val2){
            a[l]=0;
            a[r]-=val1;
            l--;
        }
        else{
            a[l]-=a[r];
            a[r]=0;
            r=l;
            l--;
            continue;
        }
    }
    if(r>=0 && a[r]!=0) cout<<"NO"<<'
';
    else cout<<"YES"<<'
';
    return;
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