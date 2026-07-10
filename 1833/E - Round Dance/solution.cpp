#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define endl '
'
 
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
class DSU{
    public:
    int n;
    vector<int> parent;
    vector<int> size;
    DSU(int n){
        this->n=n;
        parent.resize(n);
        size.assign(n,1);
        for(int i=0;i<n;i++) parent[i]=i;
    }
 
    int find(int node){
        if(parent[node]==node) return node;
        return parent[node]=find(parent[node]);
    }
    void UnionBySize(int a,int b){
        int pa=find(a);
        int pb=find(b);
        if(pa==pb)  return;
        if(size[pa]<size[pb]) swap(pa,pb);
        parent[pb]=pa;
        size[pa]+=size[pb];
    }
};
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> degree(n,0);
    DSU dsu(n);
    set<pair<int,int>> edges;
 
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
        int u=i;
        int v=a[i];
 
        dsu.UnionBySize(u,v);
        pair<int,int> edge={min(u,v),max(v,u)};
 
        if(edges.insert(edge).second){
            degree[u]++;
            degree[v]++;
        }
    }
 
 
 
 
    vector<bool> cycle(n,true);
    for(int i=0;i<n;i++){
        int root=dsu.find(i);
        if(degree[i]!=2) cycle[root]=false;
    }
 
 
 
    
    int comp=0,cyc=0;
    for(int i=0;i<n;i++){
        if(dsu.find(i)==i){
            comp++;
            if(cycle[i]){
                cyc++;
            }
        }
    }
 
 
 
    cout<<cyc+(comp-cyc>0?1:0)<<" "<<comp<<endl;
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