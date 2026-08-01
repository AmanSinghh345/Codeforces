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
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int start,end;
    cin>>start>>end;
 
    if(start==end) {
        cout<<1<<endl;
        cout<<start<<endl;
        return;
    }
 
    int maxA=INT_MIN;
    for(int & x : a) maxA=max(maxA,x);
 
    vector<int> spf(maxA+1);
    for(int i=1;i<=maxA;i++) spf[i]=i;
 
    for(int i=2;1LL*i*i<=maxA;i++){
        if(spf[i]==i){
            for(int j=1LL*i*i;j<=maxA;j+=i){
                if(spf[j]==j)
                spf[j]=i;
            }
        }
    }
 
    vector<vector<int>> forPrime(maxA+1);
    for(int i=1;i<=n;i++){
            int val=a[i];
        while(val>1){
            int x=spf[val];
        forPrime[x].push_back(i);
        while(val%x==0){
            val/=x;
        }
    }
    }
 
    vector<int> parent(n+1,-1);
    vector<int> visited(n+1,0);
    vector<bool> usedPrime(maxA+1,false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    
    while(!q.empty()){
 
        int node=q.front();
        q.pop();
 
        int x=a[node];
 
        while(x>1){
            int p=spf[x];
            if(!usedPrime[p]){
                usedPrime[p]=true;
                for(int neigh:forPrime[p]){
                    if(!visited[neigh]){
                    parent[neigh]=node;
                    visited[neigh]=true;
                         q.push(neigh);
                }
                   
                }
                
         
            }
            while(x%p==0) x/=p;
        }
      
    }
    if(visited[end]==false) {
        cout<<-1<<endl;
        return;
    }
    vector<int> path;
    int node=end;
    while(parent[node]!=-1){
        path.push_back(node);
        node=parent[node];
    }
    path.push_back(start);
    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(int x: path) cout<<x<<" ";
 
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