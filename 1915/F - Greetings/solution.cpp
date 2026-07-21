#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
 
using namespace std;
using namespace __gnu_pbds;
 
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
using ordered_set=tree<
            int,
            null_type,
            less<int>,
            rb_tree_tag,
            tree_order_statistics_node_update>;
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
    vector<pair<int,int>> arr;
  
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        arr.push_back({l,r});
   
    }
    sort(arr.begin(),arr.end());
    ordered_set st;
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=i-st.order_of_key(arr[i].second);
        st.insert(arr[i].second);
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