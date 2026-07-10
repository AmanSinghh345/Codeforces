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
void dfs(int node,vector<int>& vis,vector<set<int>>& adj,bool& al){
    vis[node]=1;
          if((int)adj[node].size()!=2) al=false;
    for(int neigh:adj[node]){
        if(!vis[neigh]) dfs(neigh,vis,adj,al);
    }
    return ;
}
 
void solve() {
    int n;
    cin>>n;
    vector<set<int>> adj(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        adj[i].insert(x);
        adj[x].insert(i);
    }
 
   
 
    int cnt=0;
    int cyc=0;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            cnt++;
            bool al=true;
            dfs(i,vis,adj,al);
            if(al) cyc++;
        }
    }
    cout<<cyc+(cnt-cyc>0?1:0)<<" "<<cnt<<'
';
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