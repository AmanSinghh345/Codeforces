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
    vector<vector<pair<int,int>>> adj(n);
 
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }
 
    vector<int> dp(n,0);
    dp[0]=1;
    stack<tuple<int,int,int>> st; //curr,parent , parent edge index
    st.push({0,-1,-1});
    int ans=1;
    while(!st.empty()){
        auto [curr,parent,pei]=st.top();
        st.pop();
        
        for(auto [neigh,currEdge]:adj[curr]){
            if(neigh==parent) continue;
            dp[neigh]=dp[curr];
            if(currEdge<pei){
                dp[neigh]++;
            }
            ans=max(ans,dp[neigh]);
            st.push({neigh,curr,currEdge});
        }
    }
    cout<<ans<<endl;
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