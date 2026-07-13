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
ll find(int k,vector<int> arr){
    vector<int> temp(arr.begin(),arr.begin()+k+1);
    // for(int x:temp) cout<<x<<" ";
    // cout<<endl;
    sort(temp.rbegin(),temp.rend());
    ll sum=0;
    int n=temp.size();
    for(int i=0;i<n;i+=2) sum+=temp[i];
    // cout<<k<<" "<<sum<<endl;
    return sum;
}
void solve() {
    int n,height;
    cin>>n>>height;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    int l=0,h=n-1;
    int ans=-2;
    while(l<=h){
        int mid=l+(h-l)/2;
        // cout<<mid<<endl;
        if(find(mid,a)<=height){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    cout<<ans+1<<endl;
}
 
int main() {
    fastio();
 
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}