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
void dfs(int node,int col,vector<int>& color,vector<vector<int>>& adj){
    color[node]=col;
    for(int neigh:adj[node]){
        if(color[neigh]==-1)
        dfs(neigh,1-col,color,adj);
    }
}
void solve() {
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    vector<int> color(n+1,-1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    for(int i=1;i<=n;i++){
        if(color[i]==-1){
            dfs(i,0,color,adj);
        }
    }
    // for(int x:color) cout<<x<<" ";
    cout<<endl;
    long long  red=0;
    long long  blue=0;
    for(int i=1;i<=n;i++){
        if(color[i]==1) red++;
        else blue++;
    }
    long long  totalPossible=red*blue;
    cout<<totalPossible-(n-1)<<"
";
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